#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: numbers of triangle to print
 * Return: 0
 */

void print_triangle(int size)
{
	int line = 0;
	int spaces;
	int hashes;


	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size -1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < line + 1; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
