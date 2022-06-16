#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The source string
 *
 * Return: The string
 */
char *cap_string(char *str)
{
	int j, i = 1;

	char sep[] = {' ', '\t', '\r', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
