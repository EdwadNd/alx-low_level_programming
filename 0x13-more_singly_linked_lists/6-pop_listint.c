#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a              
 * listint_t linked list, and returns the head node�s data (n).
 * @head: Pointer to a list.
 * Return: if the linked list is empty return 0
 **/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (*head == NULL)
		return (0);

	p = *head;
	*head = p->next;
	data = p->n;
	free(p);
	return (data);
}
