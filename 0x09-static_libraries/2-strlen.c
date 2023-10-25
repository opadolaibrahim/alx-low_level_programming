#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
    return strlen(s);
=======

/**
 * _strlen - return the length of a given string
 *
 * @s: pointer to the string 
 * Return: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
