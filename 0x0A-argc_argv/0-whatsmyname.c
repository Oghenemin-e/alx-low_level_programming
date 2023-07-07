#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
    /* Print the program name */
	printf("%s\n", argv[0]);

	return (0);

	/**
	 * Alternatively,
	 * (void)argc;  // Cast argc to (void)
	 * to indicate it is intentionally unused
	 */
}

