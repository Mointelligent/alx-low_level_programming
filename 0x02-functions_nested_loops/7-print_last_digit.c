#include"main.h"

/**
 * print_last_digit - This program returns the last number of the argument.
 * @digit: The last number is extracted from this argument.
 *
 * Return: value
 */

int print_last_digit(int digit)
{
	int value;

	value = digit % 10;
	_putchar(value + '0');

	return (value);
}
