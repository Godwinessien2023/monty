#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * mul_op - multiplies second top element of stack with top element.
 * @stack: *ptr to top of stack.
 * @line_number: current line number in the Monty bytecode.
 */

void mul_op(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Line%u: can not multiply, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}
