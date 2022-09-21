#include "main.h"

/**
 * positive_or_negative - Prints whether the args is positive, negative or 0.
 * @i: argument checked
 *
 * Return: void
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%i is positive", i);
	}
	else if (i < 0)
	{
		printf("%i is negative", i);
	}
	else
	{
		printf("%i is Zero", i);
	}
	putchar('\n');
}
