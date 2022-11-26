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
			else if (spec == 'd' || spec == 'i' )
				count += _print_num(va_arg(args, int));
			else if (spec == 'u')
				count += _print_u_num(va_arg(args, int));
			else if (spec == 'p')
				count += print_address(va_arg(args, int));
			else if (spec == 'b')
				count += _print_bin_num(va_arg(args, int));
			else if (spec == 'o')
				count += _print_oct_num(va_arg(args, int));
			else if (spec == 'x' || spec == 'X')
				count += _print_Hexes_num(va_arg(args, int),spec);
			else if (spec != '\0')
				count += _putchar(spec);
			/*endif*/
		}
		else
			count += _putchar(format[i]);
		/*end-if*/
	/*end-for*/
	va_end(args);
	return (count);
}
