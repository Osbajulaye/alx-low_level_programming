#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function
 * @a: variable
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int c;
	for (i = 0; i < 8; i++)
	{
		for(c = 0; c < 8; c++)
		{
			putchar(a[i][c]);
		}
		putchar('\n');
	}
}
