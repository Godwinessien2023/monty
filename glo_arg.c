#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

char **global_argv;

/**
 * global_argument - get argument at specific idx at global_argumentvectora argv.
 * @index: idx of argument to be retrieved.
 * Return: argument at specific idx.
 */

char *get_global_argument(int idx)
{
    if (idx < 0 || global_argv[idx] == NULL) {
        fprintf(stderr, "Error: Invalid arg[idx]\n");
        exit(EXIT_FAILURE);
    }

    return global_argv[idx];
}
