#include "main.h"

/**
 * print_array - a function that prints n
 * elements of an array of integers followed by \n
 * @a: input
 * @n:input
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%d, ", a[n]);
	}
	putchar('\n');
}
