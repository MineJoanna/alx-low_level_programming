#include "main.h"

/**
 * _strcpy - a function that copies string
 * @dest: a pointer to destination of string
 * @src: a pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *foo = dest;

	while (*src)
		*dest++ = *src++;
	return (foo);
}
