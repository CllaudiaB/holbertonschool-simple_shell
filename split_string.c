#include "shell.h"

/**
 *split_string - split a string
 *@str: string
 *
 *Return: array of each word of the string
 */

char **split_string(char *str)
{
	int size = 1024;
	int i = 0;
	char **tab_str = malloc(sizeof(char *) * size);
	char *token;

	if (tab_token == NULL)
	{
		perror("Failed malloc");
		exit(0);
	}
	
	token = strtok(str, " ");
	while (token)
	{
		tab_str[i] = token;
		i++;
		token = strtok(NULL, " ");
	}

	tab_str[i] = NULL;

	return (tab_str);
}
