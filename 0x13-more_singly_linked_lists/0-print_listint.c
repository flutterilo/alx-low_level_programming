#include "lists.h"

/**
* print_listint - print all element of listint_t
* @h: first element of listint_t
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
