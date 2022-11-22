/*
* File: printf.c
* Auth: Olofintoye
* +2377039884123 (Whatsapp number)
*/

#include "main.h"
#include <stdarg.h>

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
	char spec, *str;

	va_start(args, format);
	for (i = 0; format[i]; i++)
		if (format[i] == '%')
		{
			spec = format[++i];
			switch (spec)
			{
			case 'c':
				_putchar(va_arg(args, int));
				count += 1;
			break;
			case 's':
				str = va_arg(args, char *);
				count += _puts_2(str);
			break;
			case 'd':
			case 'i':
				count += _print_num(va_arg(args, int));
			break;
			default:
				_putchar('%');
				if (spec && spec != '%')
				{
					_putchar(spec);
					count++;
				}
				count++;
			} /*End-Switch*/
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	va_end(args);
	return (count);
}
