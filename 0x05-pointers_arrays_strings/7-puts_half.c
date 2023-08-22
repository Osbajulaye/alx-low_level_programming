#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{

	int length = 0;

	while (*s)
	{

		s++;
		length++;
	}
	return (length);
}

void puts_half(char *str)
{
	int length, i, half;
	length = _strlen(str);
	half = (length % 2 == 0) ? length /2 : (length - 1) / 2 + 1;
	
	for (i = half; i < length; i++)
		putchar(*(str + i));
	putchar('\n');
}
