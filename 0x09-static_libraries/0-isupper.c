#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
=======

/**
 * _isupper - this function checks uppercase character.
 * @c: input
 * Return: 1 if c is uppercase or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
