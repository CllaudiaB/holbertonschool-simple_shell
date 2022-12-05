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
		if (line[0] != '\n' || line[1] != '\0')
			status = exec_cmd(args);

		free(line);
		free(args);
	}
	return (0);
}
