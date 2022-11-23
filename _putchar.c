#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
* _putchar - output a chatacter
* @c: character
* Return: always 1 (number of char printed)
*/
int _putchar(char c)
{
	char buf[2];

	buf[0] = c;
	write(1, buf, 1);
	return (1);
}

/**
* _puts_2 - works like puts
`* @s: String to print
*
* Return: number of characters printed
*/
int _puts_2(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
* _print_num - program print number wit only _putchar
* @n: integer
* Return: number of characters printed
*/
int _print_num(int n)
{
	unsigned int N;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		N = -n;
		n = n * -1;
		count = 1;
	}

	N = n;

	if (N / 10)
		count += _print_num(N / 10);

	_putchar(N % 10 + '0');

	return (1 + count);
}
