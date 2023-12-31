#include "variadic_functions.h"

/**
 * print_all - print all inputs to the screen
 * @format: this is a string containig the format
 * Return: Null void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i =0, j, c = 0;
	char *str;
	const char fmt[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{

		j = 0;
		while (fmt[j])
		{
			if (fmt[j] == format[i] && c)
			{
				_putchar(',');
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(ap, int)), c = 1;
				break;
			case 'i':
				_putchar('0' + va_arg(ap, int)), c = 1;
				break;
			case 'f':
				_putchar('0' +  va_arg(ap, double)), c = 1;
			case 's':
				str = va_arg(ap, char *), c = 1;
				if (!str)
				{
					_putchar((nil));
					break;
				}
				_putchar(str);
				break;
		}
		i++;
	}
	_putchar('\n'), va_end(ap);
}
