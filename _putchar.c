#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
* _putchar - output a chatacter
* @c: character
*/
void _putchar(char c)
{
	char buf[2];

	buf[0] = c;
	write(1, buf, 1);
}

/**
* _puts_2 - works like puts, only it prints (nil) if NULL
* @s: String to print
*
* Return: number of characters printed
*/
int _puts_2(char *s)
{
	int i;

	if (s == NULL)
		s = "(nil)";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}

int _print_num(int n)
{
	unsigned int N;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count = 1;
	}

	N = n;

	if (N / 10)
		count += _print_num(N / 10);

	_putchar(N % 10 + '0');

	return (1 + count);
}
