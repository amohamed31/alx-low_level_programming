#include "main.h"
/**
 * jack_bauer - function that prints the time in 24 hours
 *
 * Return: Nothing
 *
 */
void jack_bauer(void)
{
	int h;
	int ms;

	for (h = 0; h < 24; h++)
	{
		for (ms = 0; ms < 60; ms++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(ms / 10 + '0');
			_putchar(ms % 10 + '0');
			_putchar('\n');
		}
	}
}
