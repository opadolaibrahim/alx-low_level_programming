#include "main.h"

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
