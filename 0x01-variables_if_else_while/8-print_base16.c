#include<stdio.h>
/**
 * main - using the main print base 16 values
 *
 * Description: print numbers of base 16 with putchar
 *
 * Return:0 (success)
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
