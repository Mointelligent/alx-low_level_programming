#include"main.h"

/**
 * times_table - This program prints 9 times table.
 *
 * Return: void
 */

void times_table(void)
{
	int t = 0;

	while (t <= 9)
	{
		int multi = 0;

		while (multi <= 9)
		{
			int result = t * multi;
			int first = result / 10;
			int second = result % 10;

			if (result < 10 && multi > 0)
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
			if (multi > 8)
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
