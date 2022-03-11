#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - using the main find last digit
 *
 * Description: prints last digit of a number and prints it.
 *
 * Return:0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d = n % 10;

	if (d > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, d);
	}
	else
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, d);
	}

	return (0);
}
