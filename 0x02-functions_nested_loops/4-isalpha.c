#include "main.h"
/**
 * _isalpha - function that checks if c is an alphabetic character
 *
 * @c: character that is compared
 *
 * Return: 1 if c is an aplhabetic character, 0 if it is not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
