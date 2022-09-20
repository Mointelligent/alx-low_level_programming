#include"main.h"

/**
 * print_last_digit - This program returns the last number of the argument.
 * @digit: The last number is extracted from this argument.
 *
 * Return: value
 */

int print_last_digit(int n)
{
	int last_digit;
	
	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
