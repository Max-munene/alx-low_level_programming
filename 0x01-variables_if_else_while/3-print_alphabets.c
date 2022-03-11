#include<stdio.h>
/**
 * main - using the main print the alphabet
 *
 * Description: print the alphabet in lowercase.
 *
 * Return:0 (success)
 */
int main(void)
{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		for (x = 'A'; x <= 'Z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
		return (0);
}
