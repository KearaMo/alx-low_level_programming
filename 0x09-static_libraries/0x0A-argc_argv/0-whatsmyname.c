#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: argument
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
