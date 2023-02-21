#include "main.h"
/**
 * _islower - checks if c is lower
 *
 * @c: character used to compare
 *
 * Return: 1 if c is lowercase, 0 if c is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
