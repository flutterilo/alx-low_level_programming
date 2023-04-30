#include "lists.h"

/**
* add_nodeint_end - add node at the end of listint_t
* @head: first element in of listint_t
* @n: number to store
* Return: return first element in listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
