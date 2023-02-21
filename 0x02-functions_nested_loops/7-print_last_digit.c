#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - function that returns the last digit of an int
 *
 * @n: int used to take the last digit from
 *
 * Return: n's last digit
 *
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
