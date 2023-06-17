#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at specific index
* @head: head of the list
* @index: index in the list
* Return: return 1 if success or -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		tmp = current->next;
		tmp->prev = NULL;
		free(current);
		*head = tmp;
		return (1);
	}
	while (i < index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	tmp = current;
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(tmp);
	return (1);
}
