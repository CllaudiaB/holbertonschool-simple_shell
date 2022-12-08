#include "shell.h"

/**
 * readline - Read the command from standard input
 *
 * Return: void
 */

char *readline(void)
{
	char *argv = NULL;
	size_t size = 0;
	ssize_t read = 0;

	read = getline(&argv, &size, stdin);
	if (read == -1)
	{
		free(argv);
		exit(0);
	}
	if (argv[read - 1] == '\n')
		argv[read - 1] = '\0';

	return (argv);

}
