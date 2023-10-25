#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _abs(int n)
{
    return abs(n);
=======
/**
 * _abs - gets the absolute value of an integer.
 * @n: The integer
 *
 * Return: The absolute value of integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
