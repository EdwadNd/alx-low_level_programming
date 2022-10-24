#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *p, *p2;

	p = head;
	while (tp != NULL)
	{
		p2 = p->next;
		free(p);
		p = p2;
	}
}
