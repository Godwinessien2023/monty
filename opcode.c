#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

const instruction_t cmd[] = {
	{"push", push},
	{"pall", pall},
	{"pop", pop},
	{"swap", swap},
	{"pint", pint},
	{"add", add},
	{"nop", nop},
	{"pchar", pchar},
	{"sub", sub},
	{"div", div_op},
	{"mul", mul_op},
	{"mod", mod_op},
	{"stack", stack},
	{"queue", queue},
	{NULL, NULL}
};

/**
 * find_opcode - find instructions
 * @instruct: instructions
 * Return: -1 on failure
 */

int find_opcode(const char *instruct)
{
	int i = 0;
	
	while (cmd[i].opcode != NULL)
	{
		if (strcmp(instruct, cmd[i].opcode) == 0)
			return (i);
		i++;
	}
	return (-1);
}

/**
 * inPro - process instructions
 * @top: *ptr that points to head *ptr
 * @instruct: instructions
 * @line: Keep track of lines in the .
 * Return: void
 */

void inPro(stack_t **top, const char *instruct, unsigned int line)
{
	int idx;

	idx = find_opcode(instruct);
	if (idx != -1)
		cmd[idx].f(top, line);
	else
	{
		fprintf(stderr, "Line%d: unknown instruction %s\n", line, instruct);
		freeTop(*top);
		exit(EXIT_FAILURE);
	}
}
