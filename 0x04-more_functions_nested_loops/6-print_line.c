#include "main.h"

/**
 * print_line - a function that draws a straight line
 * in the terminal
 * @n: character inputed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar(' ');
	}
	putchar('\n');
}
