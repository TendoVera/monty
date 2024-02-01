#include "monty.h"

/**
 * monty_push - pushes an element to the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction in the file
 */
void monty_push(stack_t **stack, unsigned int line_number)
{
    stack_t *top;

    top = malloc(sizeof(stack_t));
    if (top == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    if (*stack != NULL)
        (*stack)->prev = top;

    top->n = line_number;
    top->prev = NULL;
    top->next = *stack;
    *stack = top;
}

/**
 * monty_pall - prints all the values on the stack
 * @stack: double pointer to the head of the stack
 * @line_number: line number of the instruction in the file
 */
void monty_pall(stack_t **stack, unsigned int line_number)
{
    stack_t *h = *stack;

    (void)line_number;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
