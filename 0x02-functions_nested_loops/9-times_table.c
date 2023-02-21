#include "main.h"
/**
 * times_table - function that prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int product = x * y;

			if (y == 0)
			{
				_putchar('0');
			} else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
