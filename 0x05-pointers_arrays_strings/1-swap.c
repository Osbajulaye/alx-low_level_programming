#include "main.h"
#include <stdio.h>

/**
 * swap value of integers 
 */
void swap_int(int *a, int *b)
{
	int fissa;

	fissa = *a;
	*a = *b;
	*b = fissa;
}
