#ifndef MAIN_H
#define MAIN_H

#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>

extern char **environment_1;

char *show_input(void);
void prompt(void);
char *_strcat(char *src_k1);
int _strlen(char *str_k1);
void place(char *str_k1);
char *findfile(char *command_k1);
char *find_command(char *command_k1);
int compare(char *k1, char *k2);
int _strcmpdir(char *k1, char *k2);
int charput(char k);
void place(char *str_k1);
char *str_concat(char *k1, char *k2);
int lookforslash(char *cmd_k1);
int compareExit(char *k1, char *k2);
int compareEnv(char *k1, char *k2);
void execute_proc(char **cmd_k1);
char **identify_string(char *parameter_k1);
void controlC(int sig_k1);
#endif
