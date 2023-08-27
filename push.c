#include "monty.h"

/**
 * monty_push - pushes an element to the stack.
 * @head: A list for the stack.
 * @line_number: the opcode that is working on line number.
 * Return: nothing:
 */
void monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void)line_number;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	top++;
	top->next = *stack;
	top->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = top;
	*stack = top;
}
/**
 * monty_pall - prints all the values on the
 * stack, starting from the top of the stack.
 * @head: List for the stack_t.
 * @line_number: the opcode that is working on line number
 */
void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h = (*stack);

	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	(void)line_number;
}
