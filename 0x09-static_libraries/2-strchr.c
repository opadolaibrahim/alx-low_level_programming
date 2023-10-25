#include "main.h"

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
}
