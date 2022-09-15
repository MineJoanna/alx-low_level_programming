#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: char type letter
 *
 * Return: 0 on Success and 1 on fail
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++) 
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}	
