#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * div_op - divides second top element of stack by top of the element.
 * @stack: *ptr to top of stack.
 * @line_number: the current line number in monty bytecode.
 */

void div_op(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Line%u: can not divide, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "Line%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}
