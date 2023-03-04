#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of items in an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
