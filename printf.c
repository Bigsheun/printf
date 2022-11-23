/*
* File: printf.c
* Auth: Olofintoye
* +2377039884123 (Whatsapp number)
*/

#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - custom printf function
* @format: format string
*
* Return: number of characters printed
*/

int _printf(const char * const format, ...)
{
	va_list args;
	int i, count = 0;
	char spec;

	if (format == NULL)
		return (0);
	va_start(args, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			spec = format[++i];
			if (spec == 'c')
				count += _putchar(va_arg(args, int));
			else if (spec == 's')
				count += _puts_2(va_arg(args, char *));
			else if (spec == 'd' || spec == 'i')
				count += _print_num(va_arg(args, int));
			else
			{
				count += _putchar('%');
				if (spec && spec != '%')
				{
					count += _putchar('%');
				}
			}
		}
		else
			count += _putchar(format[i]);
		/*end-if*/
	/*end-for*/
	va_end(args);
	return (count);
}
