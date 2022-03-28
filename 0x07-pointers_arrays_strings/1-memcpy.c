#include "main.h"
#include<string.h>
/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: The pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
