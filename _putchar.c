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
		count += _putchar('-');
		N = -n;
		n = n * -1;
	}

	N = n;

	if (N / 10)
		count += _print_num(N / 10);

	_putchar(N % 10 + '0');

	return (1 + count);
}


/**
* _print_u_num - program print unsigned 
* number wit only _putchar
* @N: unsigned integer
* Return: number of characters printed
*/
int _print_u_num(unsigned int N)
{

	int count = 0;

	if (N / 10)
		count += _print_num(N / 10);

	_putchar(N % 10 + '0');

	return (1 + count);
}
/**
* print_address - print address (0x Hex-number)
* @n: number (address) to print
* @argv: array of command-line strings
*
* Description: Longer multiline
* section header: Section description
* Return: description
*/
int print_address(unsigned int n)
{
	int count;
	count = _puts_2("0x") + _print_hex_num(n);

	return (count);
}