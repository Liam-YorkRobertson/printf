#include "main.h"

/**
 * get_flags - to modify the conversion behavior
 * @format: string that contains the text
 * to be written to stdout
 * @m: parameter used
 *
 * Return: flags
 */

int get_flags(const char *format, int *m)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8 16 */
	int n, curr_m;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_m = *m + 1; format[curr_m] != '\0'; curr_m++)
	{
		for (n = 0; FLAGS_CH[n] != '\0'; n++)
			if (format[curr_m] == FLAGS_CH[n])
			{
				flags |= FLAGS_ARR[n];
				break;
			}
		if (FLAGS_CH[n] == 0)
			break;
	}

	*m = curr_m - 1;

	return (flags);
}
