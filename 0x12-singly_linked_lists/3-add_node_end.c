#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  *add_node_end - function that adds a new node at the end of a list_t list
  *@head: pointer to list head
  *@str: string to be duplicated
  *Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *new_node;
	int i = 0;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	while (*(str + i) != '\0')
		i++;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (new_node);
}
