#include "lists.h"

/**
* free_list - free a list_t
* @head: first node in list_t
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
