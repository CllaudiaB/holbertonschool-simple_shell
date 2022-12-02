## Project simple_shell
## Description
## Project tasks

* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* The prompt is displayed again each time a command has been executed.
* The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
* The command lines are made only of one word. No arguments will be passed to programs.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* You have to handle the “end of file” condition ***(Ctrl+D)***


* Handle command lines with arguments


* Handle the ***PATH***
* ***fork*** must not be called if the command doesn’t exist


* Implement the ***exit*** built-in, that exits the shell
* Usage: ***exit***
* You don’t have to handle any argument to the built-in ***exit***


* Implement the ***env*** built-in, that prints the current environment

## Requirements

* All files will be compiled on Ubuntu 20.04 LTS using command: ```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh```
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Shell should not have any memory leaks
* No more than 5 functions per file
* All header files should be include guarded

## Exemples
## Authors
Anne-Laure Guilloux and Claudia Bura