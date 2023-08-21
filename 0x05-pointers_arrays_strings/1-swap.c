#include "main.h"
#include <stdio.h>

/**
 * swap value of integers
 * *a = poinert a
 * *b = pointer b
 *
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int fissa;

	fissa = *a;
	*a = *b;
	*b = fissa;
}
