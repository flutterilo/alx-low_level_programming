#include "lists.h"

/**
* print_list - print all the element of list_t
* @h: parameter hold pointer to the first node
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned long n = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		n++;
		temp = temp->next;
	}
	return (n);
}
