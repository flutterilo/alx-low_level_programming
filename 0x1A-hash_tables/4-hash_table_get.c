#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - get the value
 * @ht: hash table
 * @key: key value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *curr = NULL;

	if (!key || !strcmp(key, "") || (ht == NULL))
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	curr = ht->array[index];
	while (curr)
	{
		if (!strcmp(curr->key, key))
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
