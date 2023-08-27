#include "monty.h"
/**
 * monty_pint - prints the top
 * @stack: stack head
 * @lin3_number: line_number
 * Return: no return
*/
void monty_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free(bus.input);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
