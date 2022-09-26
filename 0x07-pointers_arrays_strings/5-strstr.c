#include <string.h>
#include <stdio.h>

/**
  *_strstr-  a function that locates a substring.
  *@haystack: scanned string.
  *@needle: searched string
  *Return:  a pointer to the beginning of the located substring,
  *r NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
