#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rotr - rotates stack the bottom.
 * @stack: *ptr to top of stack.
 * @line_number: current line number in the Monty bytecode
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		stack_t *first = *stack;
		stack_t *second = (*stack)->next;

		while (second->next != NULL)
		{
			first = first->next;
			second = second->next;
		}

		first->next = NULL;
		second->prev = NULL;

		second->next = *stack;
		(*stack)->prev = second;

		*stack = second;
	}
}
