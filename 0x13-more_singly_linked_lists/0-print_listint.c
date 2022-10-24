#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	unsigned int i = 0;

	p = h;
	while (tp)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
