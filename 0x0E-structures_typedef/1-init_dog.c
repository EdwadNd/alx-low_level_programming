#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dog.h"
/**
  * init_dog -function that initialize a variable of type struct dog
  * @d: stuct
  * @name: name of dog
  * @age: age of dog
  * @owner: ownwer of dog
  * Return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		(d)->age = age;
		d->owner = owner;
	}
}
