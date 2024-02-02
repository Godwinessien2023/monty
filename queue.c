#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * queue - Sets format of the data to a queue (FIFO).
 * @stack: *ptr to top of stack.
 * @line_number: current line number in the Monty bytecode.
 */

void queue(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	stack_t *temp;

	(void)line_number;

	while (cur != NULL && cur->next != NULL)
	{
		temp = cur->next;
		cur->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = cur;

		temp->prev = NULL;
		temp->next = *stack;

		(*stack)->prev = temp;
		*stack = temp;
	}
}
