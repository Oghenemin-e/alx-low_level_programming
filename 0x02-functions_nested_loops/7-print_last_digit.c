#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	putchar('0' + last_digit);

	return (last_digit);
}
