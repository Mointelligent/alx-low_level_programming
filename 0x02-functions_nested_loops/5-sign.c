#include"main.h"

/**
 * print_sign - This program checks if the argument is positive, negative or 0.
 * @n: The argument checked.
 *
 * Return: Always 0, 1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
