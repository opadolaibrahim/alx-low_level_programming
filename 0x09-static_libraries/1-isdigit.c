#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isdigit(int c)
{
    return isdigit(c);
=======

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the digit to be checked
 * Return: 1 if c is a digit,or return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
