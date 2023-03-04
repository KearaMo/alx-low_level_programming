#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: character to write
 * Return: 1 on succes or -1 on error and set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
