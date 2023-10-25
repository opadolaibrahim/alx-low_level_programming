<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int _atoi(char *s)

{
    return atoi(s);
=======
#include "main.h"

/**
 * _atoi - Converts the first digits str to an int.
 * @s: String to be converted
 * Return: The converted number as an int
 */

int _atoi(char *s)
{
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char now;

	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			ind2 = index;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
		res *= sign;
	return (res);

>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
}
