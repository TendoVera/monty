#include <stdio.h>
#include "monty.h"

bus_t bus = {NULL, NULL, NULL};

/**
 * main - entry point for monty.
 * @argc: number of arguments passed.
 * @argv: array of argument strings.
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
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    bus.file = file;

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
        free(input);
    }

    fclose(file);
    return (0);
}
