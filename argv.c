#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @ac: Number of argument
 * @av: Array containing the argument
 * Return: 0
 */

int main(int ac, char **av)
{
	stack_t *head = NULL;
	char *opcode, *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_num = 0;
	FILE *file;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", av[0]);
		exit(EXIT_FAILURE);
	}
	file = fopen(av[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can not open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	do {
		line_num++;
		read = getline(&line, &len, file);
		if (read != -1)
		{
			opcode = strtok(line, " \t\n");
			if (opcode != NULL)
				inPro(&head, opcode, line_num);
		}
	} while (read != -1);
	free(line);
	fclose(file);
	freeTop(head);
	return (0);
}
