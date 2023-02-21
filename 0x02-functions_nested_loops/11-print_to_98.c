#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints to 98
 *
 * @n: given int that is the starting point
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 99; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
