#include "shell.h"

/**
* test_path - checks whether path is valid
* @path: tokenized path
* @command: user entered command
*
* Return: path appended with command on success
* NULL on failure
*/
char *test_path(char **path, char *command)
{
	int i = 0;
	char *output;
