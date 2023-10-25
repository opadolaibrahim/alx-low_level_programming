#include "main.h"

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
}
