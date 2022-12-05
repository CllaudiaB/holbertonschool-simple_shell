#include "shell.h"

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
		args = split_string(line);
		printf("%s\n", *args);
		status = exec_cmd(args);

		free(line);
		free(args);
	}
	return (0);
}
