#include "main.h"
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	char stop, match_found;

	match_found = 0;
	for (i = 0; s[i] != '\0';)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				stop = 0;
				match_found = 1;
				break;
			}
			else
			{
				stop = 1;
			}
		}
		if (!stop)
			i++;
		else
			break;
	}
	return (match_found ? i : 0);
}

