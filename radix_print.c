#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _print_bin_num - program print binary number
* using only _putchar
* @n: integer
* Return: number of characters printed
*/
int _print_bin_num(int n)
{
	unsigned int N;
	int count = 0;

	N = n;

	if (N / 2)
		count += _print_bin_num(N / 2);

	_putchar(N % 2 + '0');

	return (1 + count);
}

/**
* _print_oct_num - program print octal number
* using only _putchar
* @n: integer
* Return: number of characters printed
*/
int _print_oct_num(int n)
{
	unsigned int N;
	int count = 0;

	N = n;

	if (N / 8)
		count += _print_oct_num(N / 8);

	_putchar(N % 8 + '0');

	return (1 + count);
}

/**
* _print_hex_num - program print hexadecimal number
* using only _putchar
* @n: integer
* Return: number of characters printed
*/
int _print_hex_num(int n)
{
	unsigned int N;
	int count = 0;
	char hex_symbols[17] = "0123456789abcdef";

	N = n;
	if (N / 16)
		count += _print_hex_num(N / 16);

	_putchar(hex_symbols[N % 16]);

	return (1 + count);
}

/**
* _print_HEX_num - program print HEXAdecimal numbera
* using capital letters
* using only _putchar
* @n: integer
* Return: number of characters printed
*/
int _print_HEX_num(int n)
{
	unsigned int N;
	int count = 0;
	char hex_symbols[17] = "0123456789ABCDEF";

	N = n;
	if (N / 16)
		count += _print_HEX_num(N / 16);

	_putchar(hex_symbols[N % 16]);

	return (1 + count);
}
/**
* _print_Hexes_num - decides which print_HeX to call
* @n: value to print
* @spec: String to help decide
* Return: number of characters printed
*/
int _print_Hexes_num(int n, char spec)
{
	if (spec == 'x')
		return (_print_hex_num(n));
	else if (spec == 'X')
		return (_print_HEX_num(n));
	else
		return (0);
	/*end-if*/
}
