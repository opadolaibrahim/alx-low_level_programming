#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
    return strcat(dest, src);
=======

/**
 * _strcat - function to concatenate two strings and gives a new string
 *
 * @dest: str 1
 * @src: str 2
 * Return: a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, j = 0;
	char *p;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + j) != '\0')
	{
		*(dest + a) = *(src + j);
		a++;
		j++;
	}
	*(dest + a) = '\0';
	p = dest;
	return (p);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
