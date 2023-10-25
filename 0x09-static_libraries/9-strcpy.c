<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
    return strcpy(dest, src);
=======
/**
 * *_strcpy - copies string to given memory location
 * @dest: where the string needs to be copied
 * @src: where the string is
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = *(src + len);

	return (dest);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
