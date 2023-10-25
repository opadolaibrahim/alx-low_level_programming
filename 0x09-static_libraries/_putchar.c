<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _putchar(char c)
{
    return putchar(c);
}

=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
>>>>>>> e92e699994ac1c6d036a780bf3879d00334df6e4
