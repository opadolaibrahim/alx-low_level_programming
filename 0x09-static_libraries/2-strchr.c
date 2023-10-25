#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strchr(char *s, char c)
{
    return strchr(s, c);
=======

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be checked 
 * @c: character to checked 
 * Return: pointer to first output of c  or NULL
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
