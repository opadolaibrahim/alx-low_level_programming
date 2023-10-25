#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
    return memcpy(dest, src, n);
}


=======

/**
 * _memcpy - copies memory area
 *
 * @dest: cpy input
 * @src: cpy output 
 * @n: bytes of memory to copy
 * Return: a pointer to modified str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
