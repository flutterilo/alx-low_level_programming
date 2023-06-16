#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at index given
* @h: head of list
* @idx: index where to be there
* @n: value to be addded
* Return: return new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;


	current = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		i++;
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
