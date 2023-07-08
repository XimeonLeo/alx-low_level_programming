#include "hash_tables.h"

/**
 * hash_table_set - adds an elemwnt to a hash table
 *
 * @ht: the hash table
 * @key: a unique identifier for a value
 * @value: the data to be stored
 *
 * Return: 1 on success and 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *my_node = NULL;
	char *my_key = NULL, *my_value = NULL;

	if (!ht || !key || !value)
		return (0);
	/* Duplicating key and value */
	my_value = strdup(value);
	my_key = strdup(key);
	if (!my_value || !my_key)
		return (0);

	/* Getting the index using hash function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Checking if key already exits */
	if (ht->array[index] && (*ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = my_value;
		return (1);
	}
	/* If key doesn't exist, we must create a new node */
	my_node = malloc(sizeof(hash_node_t));
	if (!my_node)
		return (0);
	my_node->key = my_key;
	my_node->value = my_value;

	/* If index coincidea with an already existing index, append */
	if (ht->array[index])
		my_node->next = ht->array[index];
	ht->array[index] = my_node;
	return (1);
}
