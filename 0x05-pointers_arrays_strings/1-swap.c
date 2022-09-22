#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
