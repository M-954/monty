#include "monty.h"
/**
 * pstr_function - prints the string starting at the top of the stack
 * @stack: pointer to stack
 * @line_number: line number
 */
void pstr_function(stack_t **stack, unsigned int line_number)
{
	int a;
	char c;
	stack_t *temp = *stack;

	(void)line_number;

	while (temp != NULL && temp->n != 0)
	{
		a = temp->n;
		if (a >= 32 && a <= 126)
		/*if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))*/
		{
			c = a;
			fprintf(stdout, "%c", c);
			temp = temp->next;
		}
		else
		{
			fprintf(stdout, "\n");
			exit(EXIT_FAILURE);
		}
	}
	fprintf(stdout, "\n");
}
