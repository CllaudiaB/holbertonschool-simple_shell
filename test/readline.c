#include "shell.h"


void readline()
{
	int argc;
	char **argv = {NULL};
	ssize_t read;

	read = getline(&(*argv),(size_t *)&argc, stdin);

	if (read != -1)
	{
		while (argv != NULL)
			printf("%s\n", *argv);
		exit(EXIT_SUCCESS);
	}
}

int main()
{
	write(1, ";) ", 4);
	while (1)
		readline();

        return (0);
}
