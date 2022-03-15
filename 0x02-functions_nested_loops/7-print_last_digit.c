#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int val = n % 10;
	int r = n >= 0 ? val : val * -1;

	_putchar(r + '0');
	return (r);
}
