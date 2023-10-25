#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
    return strncat(dest, src, n);
=======

/**
 * _strncat - function to concatenate two strings and return a new string
 * with n elements of the appended string
 *
 * @dest: str 1
 * @src: str 2
 * @n: number of chars from the appended string
 * Return:char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (!(*(src + j) == '\0' || j == n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
