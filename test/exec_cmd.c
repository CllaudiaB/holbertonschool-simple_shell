#include "shell.h"

/**
 * exec_cmd - execve example
 *
 * Return: 0.
 */
void exec_cmd(char **argv)
{
        /*char *pathname = "/bin/sh";*/
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

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	exec_cmd(argv);
	
	return (0);
}
