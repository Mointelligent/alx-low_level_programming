#include<stdio.h>

/**
 * main - This program prints all possible number of two digits.
 *
 * Return: 0
 */

int main(void)
{
	int digit = 1;

	while (digit <= 100)
	{

		if (digit == 10 || digit == 11 || digit == 20 || digit == 21 || digit == 22)
		{
			continue;
		}
		else if (digit == 30 || digit == 31 || digit == 32 || digit == 33 || digit == 40)
		{
			continue;
		}
		else if (digit == 41 || digit == 42 || digit == 43 || digit == 44 || digit == 50)
		{
			continue;
		}
		else if (digit == 51 || digit == 52 || digit == 53 || digit == 54 || digit == 55)
		{
			continue;
		}
		else if (digit == 60 || digit == 61 || digit == 62 || digit == 63 || digit == 64)
		{
			continue;
		}
		else if (digit == 65 || digit == 66 || digit == 70 || digit == 71 || digit == 72)
		{
			continue;
		}
		else if (digit == 73 || digit == 74 || digit == 75 || digit == 76 || digit == 77)
		{
			continue;
		}
		else if (digit == 80 || digit == 81 || digit == 82 || digit == 83 || digit == 84)
		{
			continue;
		}
		else if (digit == 85 || digit == 86 || digit == 87 || digit == 88)
		{
			continue;
		}
		else
		{
		}
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
