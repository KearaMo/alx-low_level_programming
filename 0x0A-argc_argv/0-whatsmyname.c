#include <stdio.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: count arguments
 * @argv: argument
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
