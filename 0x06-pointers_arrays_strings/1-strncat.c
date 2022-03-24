#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The string containing the substring to append to dest
 * @n: The maximum number of characters to copy from src string
 *
 * Return: The destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
