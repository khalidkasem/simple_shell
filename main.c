#include "main.h"

/**
 * main - func with infinite loop
 * @argc: argument to main
 * @argv: argument to main
 * Return: loop.
 **/
int main(int argc_k1, char **argv_k1)
{
	(void)argv_k1;
	(void)argc_k1;

	signal(SIGINT, controlC_k1);
	prompt();
	return (0);
}
