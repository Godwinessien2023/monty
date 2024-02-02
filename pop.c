#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop - To remove the top element of the stack
 * @top: A pointer to the pointer of the head.
 * @line_number: Keeps track of the lines in the list.
 * Return: void
 */

void pop(stack_t **top, unsigned int line_number)
{
	stack_t *rem;

	if (*top == NULL)
	{
		fprintf(stderr, "Line%d: can not pop empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	rem = *top;
	*top = (*top)->next;

	if (*top != NULL)
	{
		(*top)->prev = NULL;
	}
	rem->next = NULL;
	free(rem);
}
