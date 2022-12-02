#include "shell.h"

/**
 *
 *
 *
 *
 */

char **split_string(char *str)
{

	int argc = strlen(str);
	int i;
	char **argv = malloc(argc * sizeof(char));
	char *token, *delim = " ";

	if(argv == NULL)
	{
		perror("Error");
		free(argv);
		free(str);
	}

	token = strtok(str, delim);
	for (i = 0; i < argc; i++)
	{
		argv[i] = token;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
	return (argv);
}
