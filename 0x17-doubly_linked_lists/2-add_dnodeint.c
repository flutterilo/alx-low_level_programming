#include "lists.h"

/**
* add_dnodeint - add new node to beginning of the list
* @head: head of the list
* @n: value to be added
* Return: return pointer to new_node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
