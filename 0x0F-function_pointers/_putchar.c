#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1
 * On error, -1 is required  and error is set appropriately
 */

int _putchar(char c)
{
	return( write(1, &c, 1));
}
