#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sub - subtracts top element of stack from second top element.
 * @stack: double *ptr to head of stack.
 * @line_number: line number where opcode appears.
 */

void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Line%u: can not sub, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;

	pop(stack, line_number);
}
