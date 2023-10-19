#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

/* Standard headers used */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int val;

/* Structures */

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


/* run_monty Prototypes */

int main(int argc, char **argv);
int run_monty(int argc, char **argv);

/* cmds prototypes */

void pu_sh(stack_t **stack, unsigned int line_number);
void pa_ll(stack_t **stack, unsigned int line_number);
void pi_nt(stack_t **stack, unsigned int line_number);
void po_p(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

/* get opcode */

int get_opcode(stack_t **stack, unsigned int line_number);


/* Error handlers */

void argument_error(void);
void openf_error(void);

/* Helper */
stack_t *addnode(int data);

#endif
