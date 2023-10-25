#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
=======

/**
 * _memset - fills memory with a byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: first bytes to change
 * Return: pointer of the modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
