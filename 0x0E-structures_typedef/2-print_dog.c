#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *print_dog - a function that prints a struct dog
  *@d: struct dog
  *Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
