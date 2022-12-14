#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int num, mul, prod;

	for (num = 1; num <= 9; num++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mul;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			 */
			if (prod <= 9)
			_putchar(' ');
			else
			_putchar((prod / 10) + 48); /*get the first digit*/
			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
