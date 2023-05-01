#include "lists.h"

/**
* sum_listint - sum of all the data
* @head: first element in listint_t
* Return: return sum f all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
