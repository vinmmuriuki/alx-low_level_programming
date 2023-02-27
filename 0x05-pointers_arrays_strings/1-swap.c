#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int placeholder1 = *a;
	int placeholder2 = *b;
	*a = placeholder2;
	*b = placeholder1;
}
