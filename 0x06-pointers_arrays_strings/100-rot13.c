#include <stdio.h>
#include <string.h>

/**
  * rot13 - unction that encodes a string using rot13
  * @s: pointer to string
  * Return: pointer s
  */
char *rot13(char *s)
{
	int i, j;

	char *norm = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; norm[j] != '\0'; j++)
			if (s[i] == norm[j])
			{
				s[i] = rot[j];
				break;
			}
	}
	return (s);
}
