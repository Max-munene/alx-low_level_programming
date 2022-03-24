#include "main.h"
#include<string.h>
/**
 * _strncpy - Concatenates two strings
 * @dest: The destination string
 * @src: The string copying the substring to append to dest
 * @n: The maximum number of characters to copy from src string
 *
 * Return: The destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
