#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - assign a random number to a variable
 * and prints its signed state
 * @n: variable that is checked
 *
 * Return: 0 if execution was successful
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
