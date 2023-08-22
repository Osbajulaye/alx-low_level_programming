#include "main.h"
#include <stdio.h>
/**
 * _strlen- return the length of a string
 * s: a string
 * return: length of a string
 */
int _strlen(char *s)
{

	int length = 0;

	while(*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * rev_string -reverses a string
 * s : string
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int counter = 0;
	char tmp;
	
	while (counter < length / 2)
	{
		tmp = *(s + counter);
		*(s + counter) = *(s + length - 1 - counter);
		*(s + length - 1 - counter) = tmp;
		counter++;
	}
}
