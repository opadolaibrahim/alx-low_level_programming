#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
    return strncpy(dest, src, n);
}

=======

/**
 * _strncpy - function to copy str
 *
 * @dest: output str
 * @src: input str
 * @n: number of chars to copy
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for (j = i; j < n && dest[j] != '\0'; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
