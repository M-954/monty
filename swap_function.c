#include "monty.h"
/**
 * swap_function - swaps first and second element in stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void swap_function(stack_t **stack, unsigned int line_number)
{
	int a, b;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	a = temp->n;
	b = (*stack)->next->n;
	temp->n = b;
	(*stack)->next->n = a;
}
