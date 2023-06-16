#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int c, c_two;

	for (c = 0; c <= 98; c++)
	{
		for (c_two = c + 1; c_two <= 99; c_two++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(' ');
			putchar('0' + c_two / 10);
			putchar('0' + c_two % 10);
			if (c != 98 || c_two != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
