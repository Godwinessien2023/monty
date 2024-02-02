#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * swap - swaps two element of the stack.
 * @top: * to * of the ->head.
 * @line_number: keeps track of line in list.
 * Return: void
 */

void swap(stack_t **top, unsigned int line_number)
{
	stack_t *elem1, *elem2;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "Line%d: can not swap, stack is very short\n", line_number);
		exit(EXIT_FAILURE);
	}
	elem1 = *top;
	elem2 = (*top)->next;

	elem1->prev = elem2;
	elem1->next = elem2->next;

	if (elem2->next != NULL)
	{
		elem2->next->prev = elem1;
	}
	elem2->prev = NULL;
	elem2->next = elem1;

	*top = elem2;
}
