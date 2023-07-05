#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error: Square root of negative number is undefined */
	if (n == 0 || n == 1)
		return (n); /* Base case: Square root of 0 or 1 is the number itself */

	return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Recursive helper function to calculate square root.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the range for binary search.
 * @end: The ending point of the range for binary search.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't exist.
 */
int sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1); /* Error: Natural square root does not exist */

	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid); /* Found the square root */

	if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1)); /* Search in the lower half */

	return (sqrt_helper(n, mid + 1, end)); /* Search in the upper half */
}
