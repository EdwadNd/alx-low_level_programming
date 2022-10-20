#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
  * add_node -  function that adds a new node at the end of a list_t list
  * @head: pointer to pointer to current list head
  * @str: needs to be duplicated
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->str = strdup(str);
	while (*(str + i) != '\0')
		i++;

	new_node->len = i;
	*head = new_node;
	return (*head);
}

