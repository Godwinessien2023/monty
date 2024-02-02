#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rotl - Rotates stack to top.
 * @stack: *ptr to top of stack.
 * @line_number: current line number in Monty bytecode file.
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *last = *stack;
		stack_t *secondToLast = NULL;

		while (last->next != NULL)
		{
			secondToLast = last;
			last = last->next;
		}

		secondToLast->next = NULL;
		last->prev = NULL;

		last->next = *stack;
		(*stack)->prev = last;

		*stack = last;
	}
}
