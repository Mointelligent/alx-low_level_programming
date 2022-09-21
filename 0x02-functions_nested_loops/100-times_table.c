#include"main.h"

/**
 * print_times_table - This print n times table less than 15 greater than 0.
 * @n: n number of time table.
 *
 * Return: void
 */

void print_times_table(int n)
{
	int t = 0;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		while (t <= n)
		{
			int multi = 0;

			while (multi <= n)
			{
				int result = t * multi;
				int first = result / 10;
				int second = (result % 10) / 10;
				int third = result % 10;

				if (result < 13 && multi > 0)
				{
					_putchar(' ');
				}
				if (first == 0)
				{
				}
				else
				{
					_putchar(first + '0');
				}
				_putchar(second + '0');
				if (multi > 12)
				{
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				multi++;
			}
			t++;
			_putchar('\n');
		}
	}
}
