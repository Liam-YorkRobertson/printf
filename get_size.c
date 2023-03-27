#include "main.h"

/**
 * get_size - determines the size to produce the argument
 *
 * @format: string formatted to print arguments
 * @n: list of arguments to be printed
 *
 * Return: size for string
 */

int get_size(const char *format, int *n)
{
	int curr_n = *n + 1;
	int size = 0;

	if (format[curr_n] == 'l')
		size = S_LONG;

	if (format[curr_n] == 'h')
		size = S_SHORT;

	if (size == 0)
		*n = curr_n - 1;
	else
		*n = curr_n;

	return (size);
}
