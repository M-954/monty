#include "monty.h"
/**
 * mul_function - multiplies the top and second element of stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void mul_function(stack_t **stack, unsigned int line_number)
{
	int a, b, c;
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	c = a * b;
	(*stack) = (*stack)->next;
	(*stack)->n = c;
	free(temp);
}
