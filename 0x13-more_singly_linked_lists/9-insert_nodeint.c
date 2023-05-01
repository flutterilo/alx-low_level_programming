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

	index_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	while (i < idx - 1)
	{
		index_node = index_node->next;
		if (index_node == NULL)
			return (NULL);
		i++;
	}
	new_node->n = n;
	temp = index_node->next;
	index_node->next = new_node;
	new_node->next = temp;
	return (*head);
}
