#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add - add top 2 elements of stack.
 * @stack: double *ptr to ->head of stack.
 * @line_number: line number where opcode appears.
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Line%u: can not add, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
