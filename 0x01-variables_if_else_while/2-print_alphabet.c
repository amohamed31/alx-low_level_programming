#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
