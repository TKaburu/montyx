#include "monty.h"

/**
 * addnode - This function adds a new element to stack
 * @data: The value of the node
 *
 * Return: new element
 */

stack_t *addnode(int data)
{
	stack_t *new_element = NULL;

	new_element = malloc(sizeof(stack_t));
	if (new_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_element->n = data;
	new_element->next = NULL;
	new_element->prev = NULL;

	return (new_element);
}
