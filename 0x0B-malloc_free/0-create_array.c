#include "main.h"

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char
 * @size: Size of the array
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		/* Return NULL for invalid size */
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		/* Return NULL if memory allocation fails */
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* Return pointer to the created array */
	return (array);
}
