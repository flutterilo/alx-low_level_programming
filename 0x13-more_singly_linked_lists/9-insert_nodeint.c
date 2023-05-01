#include "lists.h"

/**
* insert_nodeint_at_index - insert node in specific index
* @head: first element in listint_t
* @idx: index to the list where new node should be added
* @n: value to be add in node
* Return: return first element in listint_t
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *index_node, *temp;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (NULL);
	index_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = index_node;
		*head = new_node;
		return (*head);
	}
	while (i < idx - 1)
	{
		index_node = index_node->next;
		if (index_node->next == NULL)
		{
			new_node->next = NULL;
			index_node->next = new_node;
			return (*head);
		}
		if (index_node == NULL)
			return (NULL);
		i++;
	}
	temp = index_node->next;
	index_node->next = new_node;
	new_node->next = temp;
	return (*head);
}
