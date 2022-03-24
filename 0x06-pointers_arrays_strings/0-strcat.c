#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The string to append to dest
 *
 * Return: The destination string
 */
char *_strcat(char *dest, char *src)
{
	return (dest = (strcat(dest, src)));
}

