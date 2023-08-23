#include "monty.h"

/**
 * monty_push - pushes an element to the stack.
 * @head: A list for the stack.
 * @line_value: the opcode that is working on line number.
 * Return: nothing:
 */
void monty_push(stack_t **head, unsigned int line_value)
{
	stack_t *top;
	(void)line_value;

	top = malloc(sizeof(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "Error: Stack failed\n", line_value);
		exit(EXIT_FAILURE);
	}
	top++;
	top->next = *head;
	top->prev = NULL;
	if (*head != NULL)
		(*head)->prev = top;
	*head = top;
}
/**
 * monty_pall - prints all the values on the
 * stack, starting from the top of the stack.
 * @head: List for the stack_t.
 * @line_value: the opcode that is working on line number
 */
void monty_pall(stack_t **head, unsigned int line_value)
{
	stack_t *h = (*head);

	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	(void)line_value;
}
