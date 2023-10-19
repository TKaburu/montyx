#include "monty.h"

/**
 * argument_error - This function prints an error message to
 * stderr if user does not give any file or more than
 * one argument to your program
 *
 */

void argument_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);

}

/**
 * openf_error - This function prints an error if a file
 * cannot be opened
 *
 */

void openf_error(void)
{
	fprintf(stderr, "Error: Can't open file\n");
	exit(EXIT_FAILURE);
}


