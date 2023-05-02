#include "lists.h"

/**
* reverse_listint - reverse listint_t
* @head: first node in head
* Return: return pointer to first node of listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
