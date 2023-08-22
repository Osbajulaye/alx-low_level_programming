#include "main.h"
#include <stdio.h>

int powB(int base, int power)
{
	int i, prod = 1;

	for (i = 0; i < power; i++)
	{
		prod = prod * base;
	}
	return (prod);
}

int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

void putnchar(int num)
{
	int length = numlength(num), j = length - 1, k, tmp2, digit1;

	if (num < 0)
	{

		putchar('-');
		num = -1 * num;
	}
	if (num == 0)
		putchar(48);
	else
	{
		while (j >=0)
		{
			if (num % powB(10, j) == 0 && j !=0)
			{
				putchar(48 + num / powB(10, j));
				for (k = j; k > 0; k--)
				{
					putchar(48);
				}
				j = -1;
			}
			else
			{
				digit1 = num / powB(10, j);
				putchar(digit1 + 48);
				tmp2 = num;
				num -= powB(10, j) * digit1;
				if (numLength(tmp2) - numLength(num) == 2)
				{
					putchar(48);
					j--;
				}
				j--;
			}
		}
	}
}


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		putchar(a[i]);
		if (i == n -1)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

}
