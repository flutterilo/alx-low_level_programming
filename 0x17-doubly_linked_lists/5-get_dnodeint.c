#include "lists.h"

/**
* get_dnodeint_at_index - get node at index specific
* @head: head of the list
* @index: index in list
* Return: return node in index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
