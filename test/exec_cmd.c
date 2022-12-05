#include "shell.h"

/**
 * exec_cmd - execute the line
 * @argv: arguments in the terminal
 *
 * Return: void
 */
void exec_cmd(char **argv)
{
	pid_t pid;
        int status;

	pid = fork();

        if (pid == -1)
                perror("Fail\n");

	if (pid == 0)
        {
                if (execve(argv[0], argv, environ) == -1)
                        perror("Error to execute the command");
		exit(EXIT_FAILURE);
        }
	else
		wait(&status);

}
