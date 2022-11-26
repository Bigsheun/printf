#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _puts_3 - works like puts
`* @s: String to print
*
* Return: number of characters printed
*/
int _puts_3(char *s)
{
	int i, Kount = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			Kount += _puts_2("\\x");
			if (s[i] < 16)
				Kount += _puts_2("0");
			Kount += _print_HEX_num(s[i]);
		}
		else
			Kount += _putchar(s[i]);

	return (Kount);
}

/**
* _puts_2 - works like puts
`* @s: String to print
*
* Return: number of characters printed
*/
int _puts_2(char *s)
{
	int i, Kount = 0;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		Kount += _putchar(s[i]);

	return (Kount);
}

