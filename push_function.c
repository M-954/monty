#include "monty.h"
/**
 * push_function - adds an element in a stack
 * @stack: double pointer to a stack
 * @line_number: line number
 */
void push_function(stack_t **stack, unsigned int line_number)
{
	char *token;
	int number;
	char *arg2;
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	token = strtok(NULL, " \n\t\r");
	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(newnode);
		exit(EXIT_FAILURE);
	}
	arg2 = token;
	number = atoi(arg2);
	if (number == 0 && *arg2 != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(newnode);
		exit(EXIT_FAILURE);
	}
	newnode->n = number;
	newnode->prev = *stack;
	if (*stack == NULL)
	{
		newnode->next = NULL;
	}
	else
		newnode->next = *stack;
	*stack = newnode;
}
