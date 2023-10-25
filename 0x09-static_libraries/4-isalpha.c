#include "main.h"

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
