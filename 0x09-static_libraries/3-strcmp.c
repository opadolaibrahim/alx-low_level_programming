#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strcmp(char *s1, char *s2)
{
    return strcmp(s1, s2);
=======

/**
 * _strcmp - function to copy str
 *
 * @s1: first str to compare
 * @s2: second str to compare
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
