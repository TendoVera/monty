#include "monty.h"
/**
 * monty_pop - prints the value at the top of the stack, followed by new line
 * @stack: stack
 * @line_number: line number.
 * Return: nothing.
 */
void monty_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;

	if ((*stack)->next == NULL)
{
	    fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

next = (*stack)->next->next;
free((*stack)->next);
    if (next)
        next->prev = *stack;
    (*stack)->next = next;
}

