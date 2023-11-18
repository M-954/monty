#include "monty.h"
/**
 * pint_function - prints the value at top of stack
 * @stack: double pointer to stack
 * @line_number: line number
 */
void pint_function(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = (*stack)->n;
	fprintf(stdout, "%d\n", value);
}
