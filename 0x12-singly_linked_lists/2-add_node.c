#include "lists.h"

/**
* add_node - add new nodes to the beginning of list_t
* @head: first element in list_t
* @str: string to added
* Return: return pointer to the first element which is head
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len = 0, i = 0;

	if (str)
	{
		while (str[i])
		{
			str_len += 1;
			i++;
		}
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
