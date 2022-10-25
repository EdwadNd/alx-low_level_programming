#include "lists.h"

/**
 * listint_len - function that returns the number of
 *               elements in a linked listint_t list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	unsigned int i = 0;

	p = h;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
