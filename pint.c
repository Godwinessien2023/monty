#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pint - print value at top of stack
 * @top: *ptr to *ptr of the -> head.
 * @line_number: keeps track of lines of list.
 * Return: void
 */

void pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
	{
		fprintf(stderr, "Line%d: can not pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
