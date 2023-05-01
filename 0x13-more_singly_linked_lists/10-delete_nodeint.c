#include "lists.h"

/**
* delete_nodeint_at_index - delete node at specific index
* @head: first node in list
* @index: index of node to be deleted
* Return: return 1 if success else -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *index_node, *temp;
	unsigned int i = 0, length = 0;

	if (head == NULL)
		return (-1);
	index_node = *head;
	while (index_node != NULL)
	{
		index_node = index_node->next;
		length++;
	}
	if (index > length + 1)
		return (-1);
	index_node = *head;
	if (index == 0)
	{
		index_node = *head;
		*head = (*head)->next;
		free(index_node);
		return (1);
	}
	while (i < index - 1)
	{
		index_node = index_node->next;
		i++;
	}
	temp = index_node->next;
	index_node->next = temp->next;
	free(temp);
	return (1);
}
