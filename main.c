#include "shell.h"

/**
 * main - execute the shell
 *
 * Return: 0 if success
 */

int main(void)
{
	char *line;
	char **args;
	int status;
	(void) status;

	while (1)
	{
		printf(":) ");

		line = readline();
		if (line == NULL)
			return (0);

		args = split_string(line);
		if (args == NULL)
		{
			free(line);
			free(args);
			continue;
		}
		status = exec_cmd(args);

		free(line);
		free(args);
	}
	return (0);
}
