#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
