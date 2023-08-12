#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
	/* Main fuction */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is a positve.\n", n);
	}
	else if (n < 0)
	{
		printf("%d is a negative.\n", n);
	}
	else
	{
		printf("%d is zero.\n", n);
	}
	/* here comes the result */
	return (0);
}
