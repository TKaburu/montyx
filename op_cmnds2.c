#include "monty.h"

/**
 * swa_p - This function swaps the firt two element
 * @stack: points to the stack
 * @line_number: Keep track of the line
 *
 */

void swa_p(stack_t **stack, unsigned int line_number)
{
	stack_t *first_element, *second_element;

	(void)line_number;

	if (*stack == NULL || stack ==  NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	first_element = *stack;
	second_element = first_element->next;

	first_element->next = second_element->next;
	if (second_element->next)
		second_element->next->prev = first_element;

	second_element->prev = first_element->prev;
	if (first_element->prev)
		first_element->prev->next = second_element;

	first_element->prev = second_element;
	second_element->next = first_element;

	*stack = second_element;
}
