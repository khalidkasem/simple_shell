#include "main.h"

/**
 * execute_proc - Execute a process.
 * @cmd_k1: An array of command-line arguments.
 *
 * Return: void
 */
void execute_proc(char **cmd_k1)
{
	char *parametro_k1 = (*(cmd_k1 + 1));
	char *s_k1;
	char *slash_k1 = "/";
	char *o;

	char *vartoprint = *cmd_k1;
	char *argv_k1[4];

	if (access(cmd_k1[0], F_OK) == 0)
	{
		argv_k1[0] = cmd_k1[0];
		argv_k1[1] = parametro_k1;
		argv_k1[2] = ".";
		argv_k1[3] = NULL;

		if (execve(argv_k1[0], argv_k1, NULL) == -1)
			perror("Error");
	}
	else
	{
		o = find_command(vartoprint);
		slash_k1 = str_concat(o, slash_k1);
		s_k1 = str_concat(slash_k1, *cmd_k1);

		argv_k1[0] = s_k1;
		argv_k1[1] = parametro_k1;
		argv_k1[2] = ".";
		argv_k1[3] = NULL;

		if (execve(argv_k1[0], argv_k1, NULL) == -1)
			perror("Error");

			}

		environment_1++;

	}
	return ("Error: Not Found");
