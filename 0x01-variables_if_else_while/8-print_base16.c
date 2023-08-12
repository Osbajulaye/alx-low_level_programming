#include <stdio.h>
/* main - Prints all the numbers of base 16 in lowercas */
int main(void)
{
	int x;
	char y;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
