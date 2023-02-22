#include <unistd.h>

/**
 * _putchar - writes c to stdout
 * @c: character to print
 * Return: 1 on success
 * On error, -1 is returned, and erron is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

