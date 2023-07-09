#include "hash_tables.h"

/**
 * hash_table_print - prints out all contents in the table
 *
 * @ht: the hash table
 *
 * Return: Nothing. just print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0;
	char *comma = NULL;

	if (ht)
	{
		printf("{");
		comma = "";
		for (size = 0; size < ht->size; size++)
		{
			while (ht->array[size])
			{
				if (comma)
					printf("%s", comma);
				printf("'%s': '%s'", ht->array[size]->key, ht->array[size]->value);
				ht->array[size] = ht->array[size]->next;
				comma = ", ";
			}
		}
		printf("}\n");
	}
}
