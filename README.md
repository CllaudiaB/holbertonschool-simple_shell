# 🐧 Project simple_shell 🐧

## Description
The simple shell is the standard command interpreter for the system. It is a command that reads lines from either a file or the terminal, interprets them, and generally executes other commands.

## List of allowed functions and sysem calls
* ***access*** (man 2 access)
* ***chdir*** (man 2 chdir)
* ***close*** (man 2 close)
* ***closedir*** (man 3 closedir)
* ***execve*** (man 2 execve)
* ***exit*** (man 3 exit)
* ***_exit*** (man 2 _exit)
* ***fflush*** (man 3 fflush)
* ***fork*** (man 2 fork)
* ***free*** (man 3 free)
* ***getcwd*** (man 3 getcwd)
* ***getline*** (man 3 getline)
* ***getpid*** (man 2 getpid)
* ***isatty*** (man 3 isatty)
* ***kill*** (man 2 kill)
* ***malloc*** (man 3 malloc)
* ***open*** (man 2 open)
* ***opendir*** (man 3 opendir)
* ***perror*** (man 3 perror)
* ***printf*** (man 3 printf)
* ***fprintf*** (man 3 fprintf)
* ***vfprintf*** (man 3 vfprintf)
* ***sprintf*** (man 3 sprintf)
* ***putchar*** (man 3 putchar)
* ***read*** (man 2 read)
* ***readdir*** (man 3 readdir)
* ***signal*** (man 2 signal)
* ***stat*** (__xstat) (man 2 stat)
* ***lstat*** (__lxstat) (man 2 lstat)
* ***fstat*** (__fxstat) (man 2 fstat)
* ***strtok*** (man 3 strtok)
* ***wait*** (man 2 wait)
* ***waitpid*** (man 2 waitpid)
* ***wait3*** (man 2 wait3)
* ***wait4*** (man 2 wait4)
* ***write*** (man 2 write)

## Requirements
* All files will be compiled on Ubuntu 20.04 LTS
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Shell should not have any memory leaks
* No more than 5 functions per file
* All header files should be include guarded
* Check memory leaks: ```valgrind ./simple_shell```

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell``

## Man page execution
```man ./man_1_simple_shell```

## Project functions
* ***shell.h*** header file
* ***read_line.c*** read the command from the standard input
* ***split_string.c*** tokenize the string
* ***exec_cmd.c*** execute the command
* ***environ.c***:  
  * ***_getenv.c*** get environment variable
  * ***split_env.c*** tokenize environ
  * ***print_env*** print the environment
* ***_path.c*** find the path
* ***exit_shell*** exit the shell 
* ***functionc_str.c***: 
  * ***_strdup*** duplicate string
  * ***_strcat*** concatenate two string
  * ***_strlen*** calculate the length of the string
  * ***_strcpy*** copy the string
  * ***_strcmp*** compare two string
* ***main.c*** call the other functions to make run

## Return value
This function has no return value.

## Examples
### Interactive mode
```
root@user:/holbertonschool-simple_shell# ./simple_shell
😈 /bin/ls
AUTHORS    exec_cmd.c  functions_str.c  man_1_simple_shell  read_line.c  shell.h       split_string.c
environ.c  _exit.c     main.c           path.c              README.md    simple_shell

😈 /bin/pwd
/holbertonschool-simple_shell

😈 /bin/ls -l
total 68
-rw-r--r-- 1 root root   130 Dec  2 00:33 AUTHORS
-rw-r--r-- 1 root root  1096 Dec  8 06:24 environ.c
-rw-r--r-- 1 root root   649 Dec  8 01:15 exec_cmd.c
-rw-r--r-- 1 root root   122 Dec  8 04:50 _exit.c
-rw-r--r-- 1 root root  1811 Dec  8 06:02 functions_str.c
-rw-r--r-- 1 root root   664 Dec  8 05:59 main.c
-rw-r--r-- 1 root root   696 Dec  8 07:04 man_1_simple_shell
-rw-r--r-- 1 root root   569 Dec  8 01:32 path.c
-rw-r--r-- 1 root root   340 Dec  8 05:47 read_line.c
-rw-r--r-- 1 root root  1484 Dec  2 00:41 README.md
-rw-r--r-- 1 root root   628 Dec  8 04:48 shell.h
-rwxr-xr-x 1 root root 18112 Dec  8 05:57 simple_shell
-rw-r--r-- 1 root root   465 Dec  8 06:03 split_string.c

😈 exit
root@user:/holbertonschool-simple_shell#
```
### Non interactive mode
```
root@user:/holbertonschool-simple_shell# echo "/bin/ls" | ./simple_shell
AUTHORS    exec_cmd.c  functions_str.c  man_1_simple_shell  read_line.c  shell.h       split_string.c
environ.c  _exit.c     main.c           path.c              README.md    simple_shell
```

## Authors
***Anne-Laure Guilloux and Claudia Bura***
