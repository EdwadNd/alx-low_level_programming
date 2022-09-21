#include <stdio.h>
#include <string.h>

/**
  * leet -encodes a string into 1337
  * @str: input string
  * Return: encoded string
  */
char *leet(char *str)
{
	int i, j;
	char alp[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int numbers[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
			if (str[i] == alp[j])
				str[i] = numbers[j];
	}
	return (str);
}
