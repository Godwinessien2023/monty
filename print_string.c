#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pstr - prints string starting at top of stack.
 * @stack: *ptr toe top of stack.
 * @line_number: current line number in the monty bytecode
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;

	(void)line_number;

	while (cur != NULL && cur->n != 0 && cur->n >= 32 && cur->n <= 127)
	{
		printf("%c", cur->n);
		cur = cur->next;
	}

	printf("\n");
}
