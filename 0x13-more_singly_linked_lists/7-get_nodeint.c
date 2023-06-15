#include "lists.h"

/**
* get_nodeint_at_index - return node in specific index
* @head: first node of listint_t
* @index: index parameter
* Return: return node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);

