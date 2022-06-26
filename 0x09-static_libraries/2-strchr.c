#include "main.h"
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
	{
		continue;
	}
	return (s[i] == c ? s + i : 0);
}
