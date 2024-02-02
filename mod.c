#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mod_op - calculate the rest of the division of second top element of the stack.
 * @stack: *ptr to top of stack.
 * @line_number: current line number in monty bytecode.
 */

void mod_op(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "Line%u: can not mode, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u:division by zero\n", line_number);
		exit(EXIT_FAILURE); 
	}

	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}
