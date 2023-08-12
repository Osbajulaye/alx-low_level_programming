#include <stdio.h>
/* prints all alphabet except q and e */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
