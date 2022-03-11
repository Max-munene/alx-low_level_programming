#include<unistd.h>
/**
 * main - using the main to check size of types
 *
 * Description: print  text with write function
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
