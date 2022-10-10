#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  *new_dog - a function that creates a new dog
  *@name: name of dog
  *@age:age of dog
  *@owner: owner of dog
  *Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}
	new_d->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	new_d->name = strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = strcpy(new_d->owner, owner);
	return (new_d);
}
