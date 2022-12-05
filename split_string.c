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

	if (str == NULL)
		return (NULL);
	
	if (!argv)
	{
		write(2, "Error", 6);
		exit(EXIT_FAILURE);
	}

	token = strtok(str, delim);

	while (token != NULL)
	{
		argv[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	return (argv);
}
