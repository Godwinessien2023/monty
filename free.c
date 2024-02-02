#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * freeTop - free emory allocation
 * @top: *ptr to first element
 * Return: void
 */

void freeTop(stack_t *top)
{
	stack_t *temp;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
