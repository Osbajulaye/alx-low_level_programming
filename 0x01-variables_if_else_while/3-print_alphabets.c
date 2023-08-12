#include <stdio.h>
/* header declaaration */
int main(void)
{
	char alphabet = 'a';
	char alphabet_ = 'A';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphabet_ <= 'Z')
	{
		putchar(alphabet_);
		alphabet_++;
	}
	putchar('\n');
	return (0);
}
