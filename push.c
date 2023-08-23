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
	int stack[STACK_SIZE];

	if (top >= STACK_SIZE - 1)
	{
		fprintf(stderr, "Error:Stack malloc overflow\n");
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
	for (int m = top; m >= 0; m--)
	{
		printf("%d\n", top[m]);
	}
}
