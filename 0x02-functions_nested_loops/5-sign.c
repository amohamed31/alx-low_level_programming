#include "main.h"
/**
 * print_sign - function that checks if the number is postive, zero, or neg
 *
 * @n: int used to compare
 *
 * Return: 1 if positive, 0 if zero, or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
