#include "lists.h"

/**
* listint_len - get number of element in list_int_t
* @h: first node in string
* Return: return number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
