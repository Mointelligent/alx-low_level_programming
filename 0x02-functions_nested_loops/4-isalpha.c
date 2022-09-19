#include<ctype.h>

/**
 * _isalpha - Program checks if int c in the function is alpha or otherwise.
 * @c: This is the argument checked to see if it is alpha or otherwise.
 *
 * Return: 1 or 2
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
