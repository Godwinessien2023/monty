#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_int - checks if each of the char in a string is a number.
 * @string: string to be checked
 * Return: 1 on success
 */

int check_int(const char *string)
{
	if (string == NULL || *string == '\0')
		return (0);
	while (*string != '\0')
	{
		if (!isdigit(*string) && *string != '-' && *string != '+')
		{
			return (0);
		}
		string++;
	}

	return (1);
}
