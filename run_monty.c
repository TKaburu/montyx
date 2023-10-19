#include "monty.h"

/**
 * run_monty - This function runs the monty interprater
 * @argc: arcument count
 * @argv: command or argument pased
 *
 * Return: 0
 */

int run_monty(int argc, char **argv)
{
	char *point = NULL, *line = NULL, *file_loc = NULL;
	char *opcode, *del = " \n\t\r";
	FILE *file;
	stack_t *stack = NULL;
	int line_number = 0;
	size_t n = 0;

	if (argc != 2)
		argument_error();

	file_loc = argv[1];
	file = fopen(file_loc, "r");
	if (file == NULL)
		openf_error();
	while (getline(&line, &n, file) == -1)
	{
		line_number++;
		opcode = strtok(point, del);
		if (opcode == NULL || strlen(opcode) == 0)
			continue;
		if (get_opcode(&stack, line_number) != 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			free(line);
			fclose(file);
			return (EXIT_FAILURE);
		}
	}
	free(line);
	fclose(file);
	return (EXIT_SUCCESS);
}


/**
 * main - This is the entry point of the monty
 * interprter
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{

	run_monty(argc, argv);

	return (0);
}
