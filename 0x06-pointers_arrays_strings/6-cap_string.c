#include <stdio.h>
#include <string.h>

/**
  * cap_string-capitalizes
  * all words
  * @s: input string
  * Return: resultant string
  */
char *cap_string(char *s)
{
	int n, i, j;
	char punch[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == punch[j])
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] -= 32;
				}
		}
	}
	return (s);
}
