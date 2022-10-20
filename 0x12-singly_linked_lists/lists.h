#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * struct list_s - singly linked list
  * @str: string that is given
  * @len: string length
  *  @next: points to the nextnode.*
  * Description: singly linked list mode structure
  * for Holberton projrct
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
