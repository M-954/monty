#ifndef MONTY_H
#define MONTY_H

/*Header files*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*parameters of all functions*/
void push_function(stack_t **stack, unsigned int line_number);
void pall_function(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[]);
void pint_function(stack_t **stack, unsigned int line_number);
void pop_function(stack_t **stack, unsigned int line_number);
void swap_function(stack_t **stack, unsigned int line_number);
void add_function(stack_t **stack, unsigned int line_number);
void nop_function(stack_t **stack, unsigned int line_number);
void sub_function(stack_t **stack, unsigned int line_number);
void div_function(stack_t **stack, unsigned int line_number);
void mul_function(stack_t **stack, unsigned int line_number);
void mod_function(stack_t **stack, unsigned int line_number);
void pchar_function(stack_t **stack, unsigned int line_number);
void pstr_function(stack_t **stack, unsigned int line_number);
void rotl_function(stack_t **stack, unsigned int line_number);
#endif
