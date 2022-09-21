#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers
 * @a: an input
 * @n: an input
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		aux = a[i];
		a[n] = aux;
	}
}
