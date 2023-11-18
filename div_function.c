#include "monty.h"
/**
 * div_function - divides second element in stack by top element
 * @stack: pointer to stack
 * @line_number: line number
 */
void div_function(stack_t **stack, unsigned int line_number)
{
	int a, b, c;
	stack_t *temp = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	c = b / a;
	(*stack) = (*stack)->next;
	(*stack)->n = c;
	free(temp);
}
