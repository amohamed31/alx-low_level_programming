#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (num = 0; num < 6; num++)
	{
		putchar('a' + num);
	}
	putchar('\n');
	return (0);
}
