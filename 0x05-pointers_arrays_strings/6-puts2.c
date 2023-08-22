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

void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size; i +=2)
		putchar(*(str + i));
	putchar('\n');
}
