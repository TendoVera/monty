#include "monty.h"

/**
 * main - entry point for monty.
 * @ac: values of arguments passed.
 * @av: opcode file location.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	stack_t *top;
	top = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1], &top);

	free_dlistint(top);

	return (0);
}
