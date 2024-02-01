#include "monty.h"

/**
 * monty_pop - pops the top element of the stack
 * @stack: pointer to the stack
 * @line_number: line number
 */
void monty_pop(stack_t **stack, unsigned int line_number)
{
    stack_t *top;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    top = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;
    free(top);
}
