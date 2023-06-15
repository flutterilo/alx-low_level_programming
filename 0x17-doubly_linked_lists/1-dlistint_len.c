#include "lists.h"

/**
* dlistint_len - get length of the list
* @h: header of the list
* Return: return length of list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
