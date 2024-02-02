#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pchar - Prints characters at top of the stack.
 * @stack: *ptr to the top of the stack.
 * @line_number: current line number in the Monty bytecode.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "Line%u: can not print characters, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        fprintf(stderr, "Line%u: can not print characters, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (*stack)->n);
}
