#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Description:
 *   This function reverses the content of the given integer array by swapping
 *   the elements at corresponding positions from the beginning
 *   and end of the array.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
