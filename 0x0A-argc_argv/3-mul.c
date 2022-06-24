#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: (0) Always
 */
int main(int argc, char *argv[])
{
	int prod = 0;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

