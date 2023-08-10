#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if integer is a prime number
 * @n: number to check
 * Return: 1 if number is a prime number and 0 if its not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recurse to find prime number
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if number is prime and 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
