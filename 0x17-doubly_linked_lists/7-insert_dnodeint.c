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
	dlistint_t *new_node;
	dlistint_t *first_node;
	unsigned int i = 0;


	if (idx >= dlistint_len(*h))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h) - 1)
		return (add_dnodeint_end(h, n));
	first_node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	while (i < idx - 1)
	{
		*h = (*h)->next;
		i++;
	}
	new_node->prev = *h;
	new_node->next = (*h)->next;
	(*h)->next->prev = new_node;
	(*h)->next = new_node;
	*h = first_node;
	return (new_node);
}
