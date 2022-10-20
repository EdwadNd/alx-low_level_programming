#include "lists.h"
#include <stdio.h>

/**
  * free_list - a function that frees a list_t list
  * @head: pointer to list head
  */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		free(p->str);
		head = head->next;
		free(p);
	}
}
