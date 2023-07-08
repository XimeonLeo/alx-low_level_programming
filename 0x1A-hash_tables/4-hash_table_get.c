#include "hash_tables.h"

/**
 * hash_table_get - retrives the value associated with a key
 * from a hash table
 *
 * @ht: the hast table to look into
 * @key: the key to the value
 *
 * Return: the value associated to the key or NULL if nothing is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0, i = 0;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	if (ht->array[index] && !ht->array[index]->next)
	{
		if (*(ht->array[index]->key) == *key)
		{
			return (ht->array[index]->value);
		}
	}
	while (ht->array[index]->next)
	{
		if (*(ht->array[index]->key) == *key)
			return (ht->array[index]->value);
		i++;
	}
	return (NULL);
}
