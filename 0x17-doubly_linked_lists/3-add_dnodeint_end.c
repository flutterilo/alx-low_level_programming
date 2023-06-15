#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *first_node;

	first_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head != NULL)
	{
		while ((*head)->next)
			*head = (*head)->next;
		new_node->prev = *head;
		(*head)->next = new_node;
		*head = first_node;
	}
	else
		*head = new_node;
	return (new_node);
}
