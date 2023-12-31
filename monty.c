#include "monty.h"
int main(int argc, char *argv[]);
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 success always
 */
int main(int argc, char *argv[])
{
	instruction_t opcode[] = {
		{"push", push_function},
		{"pall", pall_function},
		{"pint", pint_function},
		{"pop", pop_function},
		{"swap", swap_function},
		{"add", add_function},
		{"nop", nop_function},
		{"sub", sub_function},
		{"div", div_function},
		{"mul", mul_function},
		{"mod", mod_function},
		{"pchar", pchar_function},
		{"pstr", pstr_function},
		{"rotl", rotl_function},
		{NULL, NULL}
	};
	int i;
	FILE *fileptr;
	unsigned int line_number = 0;
	char *current_opcode;
	stack_t *front = NULL;
	char buf[1024];
	char *token;
	stack_t *temp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fileptr = fopen(argv[1], "r");
	if (!fileptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buf, sizeof(buf), fileptr))
	{
		int found = 0;

		token = strtok(buf, " \n\t\r");
		if (strncmp(buf, "#", 1) == 0)
			continue;
		if (token != NULL)
		{
			line_number += 1;
			current_opcode = token;
			for (i = 0; opcode[i].opcode; i++)
			{
				if (strcmp(current_opcode, opcode[i].opcode) == 0)
				{
					opcode[i].f(&front, line_number);
					found = 1;
					break;
				}
			}
			if (found == 0)
			{
				if (current_opcode != NULL)
				{
					fprintf(stderr, "L%d: unknown instruction %s\n",
						line_number, current_opcode);
					exit(EXIT_FAILURE);
				}
			}
		}
	}
	fclose(fileptr);
	while (front != NULL)
	{
		temp = front;
		front = front->prev;
		free(temp);
	}
	return (0);
}
