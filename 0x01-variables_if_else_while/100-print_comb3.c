#include<stdio.h>
/**
 * main - print combinations 2 digit
 *
 * Description: print numbers 01 -99
 *
 * Return:0 (success)
 */
int main(void)
{
	int c;

	while (c <= 99)
	{
		putchar(c / 10 + '0');
		putchar(c % 10 + '0');
		if (c != 99)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
