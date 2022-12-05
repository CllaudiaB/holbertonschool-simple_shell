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
	char *delim = " ";

	if(argv == NULL)
		exit(0);

	token = strtok(str, delim);

	while (token != NULL)
	{
		argv[i] = strdup(token);
		i++;
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;

	return (argv);
}

int main(void)
{
	char *s = "hello world";
	split_string(s);
	printf("%s\n", s);

	return (0);
}
