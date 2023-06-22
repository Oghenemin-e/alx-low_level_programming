#include "main.h"

/**
 * print_numbers - This function prints the number 0 through 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
