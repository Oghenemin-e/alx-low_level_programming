#include "main.h"

/**
 * more_numbers - THis function prints numbers multiple times
 * Return: Nothing
 */

void more_numbers(void)

{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}

		_putchar('\n');
	}

	_putchar('\n');

}
