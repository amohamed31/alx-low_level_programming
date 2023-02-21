#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		_puchar(i);
	}
	_putchar('/n');
}
