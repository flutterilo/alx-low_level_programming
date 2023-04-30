#include "lists.h"

/**
* pop_listint - delete the head node of listint_t
* @head: first node in listint_t
* Return: return data of first node
*/

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL)
		return (0);
	num = (*head)->n;
	temp  = *head;
	*head = (*head)->next;
	free(temp);
	return (num);
}
