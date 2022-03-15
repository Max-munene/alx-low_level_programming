#include<stdio.h>
/**
 * main - print all possible 2 digit comb
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				if (i >= 0 && j > 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
			}
		}
	}
	putchar('\n');
	return (0);
}

