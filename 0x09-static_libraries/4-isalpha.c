#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isalpha(int c)
{
    return isalpha(c);
}

=======

/**
 * _isalpha - Returns 1 if c is uppercase or lower
 *@c: The int printed
 *Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
