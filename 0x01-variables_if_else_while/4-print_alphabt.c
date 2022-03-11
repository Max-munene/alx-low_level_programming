#include<stdio.h>
/**
 * main - using the main to ommit some alphabet
 *
 * Description: print the alphabet except some charachters
 *
 * Return:0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
