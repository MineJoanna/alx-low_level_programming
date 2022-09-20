#include "main.h"

/**
 * swap_int - a function that swaps the values of the integers
 * @a: an integer
 * @b: an integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
