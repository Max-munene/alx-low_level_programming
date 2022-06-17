#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13
 * @str: The source string
 *
 * Return: The string
 */
char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) < 'n')
		{
			*(str + i) += 13;
		}
		else if (*(str + i) >= 'n' && *(str + i) <= 'z')
		{
			*(str + i) -= 13;
		}
	}
	return (str);
}
