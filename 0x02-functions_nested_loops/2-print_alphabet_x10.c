#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - This programs prints a to z using _putchar 10 times.
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int n_times = 1;

	while (n_times <= 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		n_times++;
	}
}
