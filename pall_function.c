#include "monty.h"
/**
 * pall_function - prints all values on a stack
 * @stack: double pointer to the stack
 * @line_number: line number
 */
void pall_function(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *stack;

	while (temp != NULL)
	{
	fprintf(stdout, "%d\n", temp->n);
	temp = temp->next;
	}	
}
