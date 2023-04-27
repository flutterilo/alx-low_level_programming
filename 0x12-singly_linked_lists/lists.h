#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long size_t;

/**
* struct node - strucutre of linked list we will use
* @str: string format
* @len: length
* @next: pointer to next node
*/

typedef struct node
{
	const char *str;
	int len;
	struct node *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);


#endif
