#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev;
	int counter = 0, i = 0;

	while (s[i++])
	counter++;
	for (i = counter - 1; i >= counter / 2; i--)
	{
		rev = s[i];
		s[i] = s[counter - i - 1];
		s[counter - i - 1] = rev;
	}
}
