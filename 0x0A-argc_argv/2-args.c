#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: (0) Always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
