#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char revr;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		revr = s[i];
		s[i++] = s[len];
		s[len] = revr;
	}
}
