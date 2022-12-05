#include "shell.h"

#define BUFFER_SIZE 64

/**
 * readline - Read the command from standard input
 *
 * Return: void
 */

char *readline(void)
{
	int argc;
	char *argv = {NULL};
	ssize_t read;

	read = getline(&(argv),(size_t *)&argc, stdin);

	if (read > 0)
	{
		write(1, argv, BUFFER_SIZE);
		write(1, ":) ", 4);
	}
	return (argv);
}

int main(void)
{
	write(1, ":) ", 4);

	while(1)
		readline();
}
