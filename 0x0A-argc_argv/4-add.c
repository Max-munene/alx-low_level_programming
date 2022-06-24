#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates sum
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 (Success), 1 Fail
 *
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
