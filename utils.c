#include "main.h"

/**
 * is_printable - determines if a char is printable
 *
 * @s: to be checked
 *
 * Return: 1 if s is printable
 * return 0 otherwise
 */

int is_printable(char s)
{
	if (s >= 32 && s < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - append ascii in hexadecimal code to buffer
 *
 * @buffer: array of chars
 * @n: index where you start appending
 * @ascii_code: ASCII CODE
 *
 * Return: always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int n)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digitslong */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[n++] = '\\';
	buffer[n++] = 'x';

	buffer[n++] = map_to[ascii_code / 16];
	buffer[n] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - determines if char is a digit
 *
 * @s: to be checked
 *
 * Return: 1 if s is a digit
 * return 0 otherwise
 */

int is_digit(char s)
{
	if (s >= '0' && s <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - number is casted to specified size
 *
 * @num: number to be checked
 * @size: number indicating type checked
 *
 * Return: value of number casted
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - number casted to specified size
 *
 * @num: number to be checked
 * @size: number indicating type checked
 *
 * Return: value of number casted
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
