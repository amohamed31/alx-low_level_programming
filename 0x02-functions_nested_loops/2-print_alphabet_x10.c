#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10 on a different line each time
 *
 * Return - Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
