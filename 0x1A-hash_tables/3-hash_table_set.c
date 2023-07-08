#include "hash_tables.h"


/**
 * myStrdup - duplicate a string and check for error
 * @node: node that hold value
 * @myKey: string that was duplicated.
 * Return: pointer to new string or null
 */
char *myStrdup(hash_node_t **node, char *myKey)
{
	char *s = NULL;

	s = strdup(myKey);
	if (s == NULL)
	{
		if ((*node)->key)
			free((*node)->key);
		if ((*node)->value)
			free((*node)->value);
		free(*node);
		return (NULL);
	}
	return (s);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to use
 * @key: hash table key. Cannot be an empty string
 * @value: value associated with the key. Cannot be an empty string
 * Return: 1 if success. 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *curr = NULL;
	char *temp = NULL;
	unsigned long int index = 0;

	if (!ht || !strcmp(key, "") || !key || !value)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = myStrdup(&new, (char *)key);
	new->value = myStrdup(&new, (char *)value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		curr = ht->array[index];
		while (curr)
		{
			if (!strcmp(curr->key, key))
			{
				temp = curr->value;
				curr->value = myStrdup(&new, (char *)value);
				free(temp);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			curr = curr->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
