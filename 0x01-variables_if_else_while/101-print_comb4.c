#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, b, g;

	for (r = '0'; r < '9'; r++)
	{
		for (b = r + 1; b <= '9'; b++)
		{
			for (g = b + 1; g <= '9'; g++)
			{
				if ((b != r) != g)
				{
					putchar(r);
					putchar(b);
					putchar(g);

					if (r == '7' && b == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
