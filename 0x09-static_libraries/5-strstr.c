#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
    return strstr(haystack, needle);
}


=======

/**
 * _strstr - finds the first occurrence of the substr
 * @haystack: str input 
 * @needle: substr to match
 * Return: pointer to the 1st match or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, match;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					match = 0;
					break;
				}
				match = 1;
			}
			if (match)
				return (haystack + i);
		}
	}
	return (NULL);
}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
