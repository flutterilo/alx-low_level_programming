#include "lists.h"

/**
* list_len - return number of element in linked list_t
* @h: pointer to first node
* Return: number of element
*/

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
