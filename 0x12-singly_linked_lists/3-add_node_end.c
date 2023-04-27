#include "lists.h"

/**
* add_node_end - add node to end of list
* @head: first node or the head
* @str: string to added
* Return: return head of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
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
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
