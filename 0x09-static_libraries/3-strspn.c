#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
    return strspn(s, accept);
}

=======

/**
 * _strspn - finds the length of a prefix str
 *
 * @s: str to work on
 * @accept: pattern to match against
 * Return:  int to how many bytes match the pattern
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0, match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (len != 0)
			match++;
		if (match != len)
			return (len);
	}
	return (0);
}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
