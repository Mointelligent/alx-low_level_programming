#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - This program prints alphabet in lowercase using _putchar.c
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
