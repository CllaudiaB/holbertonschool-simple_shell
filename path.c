#include "shell.h"

/**
 * _path - Verify that the command exists
 * @str: command to verify
 *
 * Return: 0
 */

char *_path(char *str)
{
	int notfound = 0;
	char *token, *path = NULL, *path_copy = NULL;
	char *temp = getenv("PATH");
	struct stat st;

	path_copy = malloc(strlen(temp) + 1);
	strcpy(path_copy, temp);

	token = strtok(path_copy, ":");
	while (token)
	{
		path = malloc(sizeof(char) * (strlen(token) + strlen(str) + 1));
		strcat(path, token);
		strcat(path, "/");
		strcat(path, str);
		if (stat(path, &st) == 0)
		{
			notfound = 1;
			return (path);
		}
		token = strtok(NULL, ":");
	}
	if (notfound == 0)
		write(1, "NOT FOUND\n", 11);

	return (NULL);
}
