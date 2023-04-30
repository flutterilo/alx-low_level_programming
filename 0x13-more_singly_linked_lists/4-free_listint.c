#include "lists.h"

/**
* free_listint - frees listint_t
* @head: first element in listint_t
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
