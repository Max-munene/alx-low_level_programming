#include "main.h"
/**
 * main - prints "_putchar"
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *text = "_putchar\n";
	int len = 9;
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
