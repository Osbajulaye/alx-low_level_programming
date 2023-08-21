#include "main.h"
#include <stdio.h>
/**
 *  prints a string in reverse
 *  s: a string
 *  return 0
 */
int _strlen(char *s)
{
	char *p = s;

	while(*s)
		s++;
	return(s - p);
}

void print_rev(char *s)
{
	int size = _strlen(s);

	while(size--)
		putchar(*(s + size));
	putchar('\n');
}
