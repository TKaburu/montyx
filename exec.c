#include "monty.h"


/**
 * get_opcode - This function checks the command
 * @stack: point to the stack
 * @line_number: Keep track of the line number
 *
 * Return: 0 on success or -1 if opecode not found
 */

int get_opcode(stack_t **stack, unsigned int line_number)
{
	int t = 0;
	char *value = NULL, *comnd = NULL;

	instruction_t file[] = {
		{"push", pu_sh},
		{"pall", pa_ll},
		{"pint", pi_nt},
		{"pop", po_p},
		{"nop", nop},
		{NULL, NULL}
	};

	while (file[t].opcode)
	{
		if (strcmp(file[t].opcode, comnd) == 0)
		{
			if (strcmp(comnd, "push") == 0)
			{
				if (value == NULL || !isdigit(*value))
				{
					fprintf(stderr, "L%d: usage: push integer", line_number);
					return (1);
				}
				val = atoi(value);
			}
			file[t].f(stack, line_number);
		return (0);
		}
		t++;
	}
	fprintf(stderr, "L%d: Unknown instruction %s\n", line_number, comnd);
	return (1);
}

