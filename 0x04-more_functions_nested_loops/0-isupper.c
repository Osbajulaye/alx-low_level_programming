#include "main.h"
#include <stdio.h>

/**
 * _isupper - prints 1 or 0 depending on input
 * @c : input type variable
 *
 * Description: checks for uppercase letters
 * Return: always 0.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
