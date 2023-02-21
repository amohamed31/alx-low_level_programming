#include "main.h"
/**
 * _abs - function that checks if int is postive or negative, prints int if it
 *  is postive, or multiplies int by -1 if int is negative and then prints int
 *
 * @n: int that is checked and made abs
 *
 * Return: n or n * -1
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
