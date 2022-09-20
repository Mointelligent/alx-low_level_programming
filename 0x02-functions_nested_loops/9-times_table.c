#include"main.h"

/**
 * times_table - This program prints the 9 times table.
 *
 * Return: void
 */

void times_table(void)
{
	int times;
	int first;
	int second;
	int result;
	int multi;
	_putchar('l');


	while (times <= 9)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			result = times * multi;
			first = result / 10;
			second = result % 10;
			if (first == 0)
			{
			}
			else
			{
				_putchar(first + '0');
			}
			_putchar(second + '0');
			_putchar(',');
			_putchar(' ');
		}
		times++;
		_putchar('\n');
	}
}
