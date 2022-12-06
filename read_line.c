#include "shell.h"

#define BUFFER_SIZE 64

/**
 * readline - Read the command from standard input
 *
 * Return: void
 */

char *readline(void)
{
	size_t size = 0;
	char *argv = NULL;
	ssize_t read;

	read = getline(&(argv), &size, stdin);

	if (read == -1)
	{
		if (feof(stdin))
		{
			free(argv);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Failed to read the line");
			free(argv);
			exit(EXIT_FAILURE);
		}
	}
	return (argv);
}
