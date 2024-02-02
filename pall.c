#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

 /**
 * pall - prints all values
 * @top: * to * to the ->head.
 * @line_number: Keeps track of lines of list.
 * Return: void
 */

void pall(stack_t **top, unsigned int line_number)
{
	stack_t *first;
	(void)line_number;

	first = *top;

	while (first != NULL)
	{
		printf("%d\n", first->n);
		first = first->next;
	}
}
