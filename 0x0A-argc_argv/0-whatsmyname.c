#include <stdio.h>
/**
 * main - prints name of program
 *
 * @argc: number of command-line arguments
 *
 * @argv: the array of command line arguments
 *
 * Return: 0 Always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

