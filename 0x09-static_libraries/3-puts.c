#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *s)
{
    puts(s);
=======

/**
 * _puts - print a given str
 *
 * @str: pointer arg for str
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
