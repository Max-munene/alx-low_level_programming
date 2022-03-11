#include<stdio.h>
/**
 * main - using the main print reverse alhabet
 *
 * Description: print alphabets in reverse order
 *
 * Return:0 (success)
 */
int main(void)
{
	char x;

	for (x = 'z'; x <= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
