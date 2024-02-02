#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - add an items to the list from the top.
 * @top: * to the * of the head.
 * @line_number: follows the lines in the list.
 * Return: void
 */

void push(stack_t **top, unsigned int line_number)
{
	stack_t *new;
	char *added_arg;
	int number;

	added_arg = strtok(NULL, " \t\n");
	if (added_arg == NULL || !check_int(added_arg))
	{
		fprintf(stderr, "Line%d: usage: push int\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(added_arg);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		return;
	}

	new->n = number;
	new->prev = NULL;
	new->next = *top;

	if (*top != NULL)
	{
		(*top)->prev = new;
	}
	*top = new;
}
