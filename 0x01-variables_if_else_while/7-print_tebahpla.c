#include <stdio.h>
int main(void)
{
	char var_;

	for (var_ = 'z'; var_ >= 'a'; var_--)
		putchar(var_);

	putchar('\n');

	return (0);
}
