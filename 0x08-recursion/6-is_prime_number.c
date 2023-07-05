#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not prime */

	return (is_prime_helper(n, 2));/* Start checking divisibility from 2 */
}

/**
 * is_prime_helper - recursive helper function to check divisibility
 * @n: the number to check
 * @divisor: current divisor to test divisibility
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int divisor)
{
	if (n == divisor)
		return (1); /* If the divisor reaches n, n is prime */

	if (n % divisor == 0)
		return (0);
	/* If n is divisible by the divisor, it is not prime */

	return (is_prime_helper(n, divisor + 1));
	/* Check divisibility with the next divisor */
}
