#include "main.h"
#include <stdio.h>
/**
 *  prints a string followed by anew line
 *  str: a string
 *  return 0
 */
void _puts(char *str)
{
	while(*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
