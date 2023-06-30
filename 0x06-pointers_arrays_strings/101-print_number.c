#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: This function prints the given integer using _putchar.
 * If the number is negative, it prints a '-' sign before the absolute value.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	int temp = n;

	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor != 0)
	{
		_putchar('0' + (n / divisor));
		n %= divisor;
		divisor /= 10;
	}
}
