#include "monty.h"
/**
 * sub_function - subtracts top element from second element
 * @stack: pointer to stack
 * @line_number: line number
 */
void sub_function(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int a, b, c;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	c = b - a;
	(*stack) = (*stack)->next;
	(*stack)->n = c;
	free(temp);
}
