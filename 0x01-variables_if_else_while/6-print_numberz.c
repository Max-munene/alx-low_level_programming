#include<stdio.h>
/**
 * main - using the main print numbers
 *
 * Description: print numbers of base 10 with putchar
 *
 * Return:0 (success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
