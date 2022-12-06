#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>


extern char **environ;

/*functions shell */
char *readline(void);
char **split_string(char *str);
int exec_cmd(char **argv);
char *_getenv(const char *name);
char *find_path(char *cmd);

int _putchar(char c);

/** functions_str */
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
