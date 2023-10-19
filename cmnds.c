#include "monty.h"

/**
 * pu_sh - This function adds new element to stack
 * @stack: Points to the adre of the frst elemtent in the stack
 * @line_number: Keeps track of the line number
 *
 */

void pu_sh(stack_t **stack, unsigned int line_number)
{

	stack_t *new_element = NULL;
	int val = 0;

	(void)line_number;

	new_element = malloc(sizeof(stack_t));;
	if (new_element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_element->prev = NULL;
	new_element->n = val;

	if (*stack)
	{
		(*stack)->prev = new_element;
	}
	new_element->next = *stack;
	*stack = new_element;

}

/**
 * pa_ll - This functionprints the element of the stack
 * @stack: points to the adress of first element
 * @line_number: Keeps trck of line number
 *
 */

void pa_ll(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	(void)line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);

	temp = *stack;
	while (temp)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}

}

/**
 * pi_nt - Thi function prints the value at the top of stack
 * @stack: points to the adress of first element
 * @line_number: Keeps trck of line number
 *
 */

void pi_nt(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		line_number++;
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "%d\n", (*stack)->n);

}

/**
 * po_p - This funtion removes element t the top ofte stack
 * @stack: Points to the adress of the top stack
 * @line_number: Keep track of the line number
 *
 */

void po_p(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		*stack = (*stack)->next;
		free(stack);
		*stack = NULL;
		(*stack)->prev = NULL;
	}
}
