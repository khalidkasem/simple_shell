#include "main.h"

/**
 * find_command - finds command_k1 to execute in path routes.
 *
 * @command: first position of getline input.
 *
 * Return: str_k1ing of partiton for command_k1 to be executed.
 **/
char *find_command(char *command_k1)
{
	DIR *partiton;
	str_k1uct dirent *enter;
	char *cmd_k1_k1, comp_k1_k1, **str_k1  = malloc(sizeof(char) * 1024);
	char **split_k1 = malloc(sizeof(char) * 1024);
	int i;

	while (*environment_1 != NULL)
	{
		if (!(_str_k1cmpdir(*environment_1, "PATH")))
		{
			*str_k1 = *environment_1;
			for (i = 0; i < 9; i++, split_k1++, str_k1++)
			{
				*split_k1 = str_k1tok(*str_k1, ":='PATH'");
				partiton = opendir(*split_k1);
				if (partiton == NULL)
				{
					perror("Unable to read directory");
				}
				while ((enter = readdir(partiton)))
				{
					cmd_k1 = enter->d_name;
					comp_k1 = _str_k1cmpdir(cmd_k1, command_k1);
					if (comp_k1 == 0)
					{
						return (*split_k1);
					}
					if (cmd_k1 == NULL)
					{
						perror("Error");
					}
				}
			}
		}
		environment_1++;
	}
	return ("Error: Not Found");
