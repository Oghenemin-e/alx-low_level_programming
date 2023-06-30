#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the source string to the end of the destination string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add a terminating null byte to the concatenated string */
	*dest = '\0';

	return (original_dest);
}
