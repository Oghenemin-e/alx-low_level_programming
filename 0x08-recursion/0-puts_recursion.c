#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to be printed
 *
 * Description: This function prints each character of the string recursively,
 *              followed by a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string reached */
	{
		_putchar('\n'); /* Print a new line */
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursively call the function */
}
