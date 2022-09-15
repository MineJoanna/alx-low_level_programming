#include "main.h"

/**
 * _isdigit - checks if a character is a digit or not
 * @c: An inputed character
 *
 * Return: 1 if c is but 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
