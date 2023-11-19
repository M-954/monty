#include "monty.h"
/**
 * pchar_function - prints the ascii char of top element
 * @stack: pointer to stack
 * @line_number: line number
 */
void pchar_function(stack_t **stack, unsigned int line_number)
{
	int a = (*stack)->n;
	char c;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		c = a;
		fprintf(stdout, "%c\n", c);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
