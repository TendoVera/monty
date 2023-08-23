#include "monty.h"
/**
 * monty_pop - prints the value at the top of the stack, followed by new line
 * @head: head stack
 * @line_value: line number.
 * Return: nothing.
 */
void monty_pop(stack_t **head, unsigned int line_value)
{
	stack_t *new = NULL;

	if ((*head)->next == NULL)
{
	    fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

next = (*head)->next->next;
free((*head)->next);
    if (next)
        next->prev = *head;
    (*head)->next = next;
}

