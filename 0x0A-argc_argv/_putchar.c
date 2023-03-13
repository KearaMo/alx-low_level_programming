#include <unistd.h>

/**
 * _putchar - writes characterc to stdout
 * @c: character to print
 * Return: 1 on success and -1 on error and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
