#include "lists.h"

/**
* _c - adding new element in list
* @list: list based
* @num: number of nodes
* @new: new_node to be added in list
* Return: return list of node
*/

const listint_t **_c(const listint_t **list, size_t num, const listint_t *new)
{
	const listint_t **new_list;
	size_t i = 0;

	new_list = malloc(sizeof(listint_t) * num);
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	while (i < num - 1)
	{
		new_list[i] = list[i];
		i++;
	}
	new_list[i] = new;
	free(list);
	return (new_list);
}

/**
* print_listint_safe - print list based on safe
* @head: first node in list
* Return: number of node
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0, i = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		i = 0;
		while (i < num)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
			i++;
		}
		num++;
		list = _c(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
