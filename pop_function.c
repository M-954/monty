#include "monty.h"
/**
 * pop_function - deletes element at top of stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void pop_function(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
