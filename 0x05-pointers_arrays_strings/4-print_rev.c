#include "main.h"
#include <stdio.h>
/**
 *  prints a string in reverse
 *  s: a string
 *  return 0
 */

void print_rev(char *s)
{
	int size = _strlen(s);

	while(size--)
		putchar(*(s + size));
	putchar('\n');
}
