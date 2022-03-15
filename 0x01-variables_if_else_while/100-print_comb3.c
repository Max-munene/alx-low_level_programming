#include<stdio.h>
/**
 * main - Program that prints numbers from 0 to 99
 * Return: 0;
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
			}
			if (i >= 48 && i < 56 && j <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
