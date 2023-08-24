#include "main.h"
#include <stdio.h>

/**
 * print numbers- print 0-9
 */

void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
		:putchar(i + 48);
	putchar('\n');
}
