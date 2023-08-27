#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - entry point for monty.
 * @ac: values of arguments passed.
 * @av: opcode file location.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	stack_t *top = NULL;
	unsigned int line_number = 0;
	ssize_t read_line = 1;
	char *input;
	size_t size = 0;
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "monty file\n");
		exit(EXIT_FAILURE);
	
}
bus.file = file;
         if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (read_line > 0)
	{
		input = NULL;
		read_line = getline(&input, &size, file);
		bus.input = input;
		line_number++;
		
		if (read_line > 0)
		{
			execute(input, &top, line_number, file);
	}
		free (input);
	}
	fclose(file);

	return (0);
}
