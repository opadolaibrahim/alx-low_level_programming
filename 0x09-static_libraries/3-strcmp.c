#include "main.h"

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
}
