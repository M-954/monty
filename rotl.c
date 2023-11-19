#include "monty.h"
/**
 * rotl_function - rotates the stack to the top
 * @stack: pointer to stack
 * @line_number: line number
 */
void rotl_function(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *current = *stack;

	(void)line_number;
	if (*stack != NULL && (*stack)->next != NULL)
	{
		(*stack) = (*stack)->next;
		(*stack)->prev = NULL;
	}
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	if (temp != NULL)
	{
		current->next = temp;
		temp->next = NULL;
		temp->prev = current;
	}
}
