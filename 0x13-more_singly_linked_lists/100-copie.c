#include "lists.h"

/**
* reverse_listint - reverse listint_t
* @head: first node in head
* Return: return pointer to first node of listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next_node = *head;
		temp = next_node->next;
		next_node = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
