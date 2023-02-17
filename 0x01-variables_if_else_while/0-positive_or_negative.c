#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Main function checks to see
 * if the random number is postive
 * or negative and returns the number
 * with a string followed by a new line
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		return printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		return printf("%d is zero\n", n);
	}
	else
	{
		return printf("%d is negative\n", n);
	}
	return (0);
}
