#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints every number from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{

	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
	} else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
	}
	printf("98\n");
}

int main ()
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	return 0;
}
