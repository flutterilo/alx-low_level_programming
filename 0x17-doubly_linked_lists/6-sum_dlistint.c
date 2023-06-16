#include "lists.h"

/**
* sum_dlistint - sum of all lists
* @head: first node in list
* Return: return sum of all node values
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
