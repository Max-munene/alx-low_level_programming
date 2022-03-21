#include "main.h"

/**
 * swap_int - function to swap values
 * @a: pointer to be swapped
 * @b: pointer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
