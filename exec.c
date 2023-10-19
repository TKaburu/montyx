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
			if (strcmp(comnd, "push"))
			{
				if (isdigit(*value) == 1)
					val = atoi(value);
				else
					return (1);
			}
			file[t].f(stack, line_number);
			break;
		}
		t++;
	}
	if (!file[t].opcode)
		return (-1);
	return (0);
}
