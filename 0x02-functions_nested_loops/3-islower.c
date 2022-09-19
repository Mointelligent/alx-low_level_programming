#include<ctype.h>

/**
 * _islower - This program checks if the argument in the function is lowercase.
 * @c: is an integer type argument for taking character input.
 *
 * Return: Always 0 or 1.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
