#include "shell.h"

/**
 *split_string - split a string
 *@str: string
 *
 *Return: array of each word of the string
 */

char **split_string(char *str)
{
	int i = 0;
	int size = 1024;
	char **argv = malloc(sizeof(char *) * size);
	char *token;
	char *delim = " ";

	
	if (!argv)
	{
		perror("Failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(str, delim);

	for (i = 0; token != NULL; i++)
	{
		argv[i] = strdup(token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	return (argv);
}
