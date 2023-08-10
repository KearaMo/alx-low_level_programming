#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characterc
 * @c: The character to print
 *
 * Return: On success 1
 * On error, return -1 and set erron appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

