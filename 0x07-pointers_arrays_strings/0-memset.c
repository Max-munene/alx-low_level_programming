#include "main.h"
#include <string.h>
/**
 * _memset - copies the character b to the first n bytes pointed by s
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

