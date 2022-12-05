#include "shell.h"

/**
 *split_string - split a string
 *@str: string
 *
 *Return: array of each word of the string
 */

char **split_string(char *str)
{
	int i = 0, size = 1024;
	char **argv = malloc(sizeof(char *) * size);
	char *token;

	if(argv == NULL)
		exit(0);

	token = strtok(str, " ");

	while (token != NULL)
	{
		argv[i] = strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	argv[i] = NULL;

	return (argv);
