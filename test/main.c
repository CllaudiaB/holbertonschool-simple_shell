#include "shell.h"

int main(int argc, char **argv)
{
	int read;
	char **split;

	printf(":) ");
	while (1)
	{
		read = getline(argv, (size_t *)&argc, stdin);
		if (read == -1)
		{
			exit(EXIT_SUCCESS);
		}
		split = split_string(*argv);
		exec_cmd(split);
	}
	return (EXIT_SUCCESS);
}
