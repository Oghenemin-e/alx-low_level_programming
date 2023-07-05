#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The number to compute the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 *
 * Description: This function calculates the factorial of a given number by
 *              recursively multiplying the number by the factorial of its
 *              predecessor until it reaches 0 or 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
