#include "shell.h"

/**
 *_getenv - gets an environment variable
 *@name: name environment
 *
 *Return: a pointer to the value in the
 *environment, or NULL if there is no match
 */

char *_getenv(const char *name)
{
	int i, j;
	int status;

	for (i = 0; environ[i] != NULL; i++)
	{
		status = 1;
		for (j = 0; environ[i][j] != '='; j++)
		{
			if (name[j] != environ[i][j])
			{
				status = 0;
				break;
			}
		}
		if (status)
			return (&environ[i][j + 1]);
	}
	return (NULL);
}

/**
 * split_env - split environ
 * @path: path
 * Return: array of the path
 */

char **split_env(char *path)
{
	int size = 1024;
	int i = 0;
	char **tab_path = malloc(size * sizeof(char *));
	char *token;

	if (tab_path == NULL)
	{
		perror("Error : malloc");
		exit(1);
	}

	token = strtok(path, ":");
	while (token != NULL)
	{
		tab_path[i] = token;
		i++;
		token = strtok(NULL, ":");
	}
	tab_path[i] = NULL;

	return (tab_path);
}

/**
 *print_env - print the environment
 *
 *Return: void
 */

void print_env(void)
{
	unsigned int i;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
}
