#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: memory to fill
 * @c: character to fill memory with
 * @n: number of bytes to fill
 * Return: changed array
 */

char *_memset(char *s, char c, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = c;
		n--;
	}
	return (s);
}
