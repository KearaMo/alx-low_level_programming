#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character c
 * @c: character to write
 * Return: 1 (success), -1 (error) and errno is set
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
