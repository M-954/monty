#include "monty.h"
/**
 * add_function - adds the first two elements of stack
 * stack: pointer to stack
 * @line_number: line number
 */
void add_function(stack_t **stack, unsigned int line_number)
{
	int a, b, c;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	a = (*stack)->n;
	b = (*stack)->next->n;
	c = a + b;
	(*stack) = (*stack)->next;
	(*stack)->n = c;
	free(temp);
}
