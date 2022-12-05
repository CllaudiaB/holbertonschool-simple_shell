#include "shell.h"

/**
 * exec_cmd - execute the line
 * @argv: pointer to an array
 *
 * Return: 1 if it succeeds or 2 if it failled
 */
int exec_cmd(char **argv)
{
        pid_t pid;
        int status;

        pid = fork();

        if (pid == -1)
                perror("Fail to create the child process");

        if (pid == 0)
	{
		if(argv[0] == NULL)
        	{
			free(argv);
			perror("Failed");
		}

                if (execve(argv[0], argv, environ) == -1)
		{
                        perror("Error to execute the command");
			return (0);
		}
		free(argv);
                exit(EXIT_FAILURE);
        }
        else
                wait(&status);

	return (1);
}
