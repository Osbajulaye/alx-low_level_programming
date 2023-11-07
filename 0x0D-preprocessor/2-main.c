#include <stdio.h>

/**
 * main - prints the name of whatever file runs this code
 * Return: Null void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return 0;
}
