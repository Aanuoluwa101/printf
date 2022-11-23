#include "main.h"

/**
* write_character - prints a character
* @c: the character to be printed
*
* Return: the number of characters printed
*/

int write_character(char c)
{
	return (write(1, &c, 1));
}

/**
 * write_string - the string to be reversed
 * @s: the string to be reversed
 *
 * Return: the number of character printed
 * excluding null bytes
 */

int write_string(char *s)
{
	int i;
	int count = 0;

	i = 0;
	while (s[i])
	{
		write_character(s[i]);
		count++;
		i++;
	}
	return (count);
}

/**
 * _strlen - a function that finds the length of a string
 * @s: the string
 *
 * Return: the number of characters in a string
 * excluding null bytes
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * print_reverse - a function that prints a string
 * in reverse
 * @s: string to be reverse
 * Return: the number of characters printed
 * excluding the terminating null bytes
 */
int print_reverse(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
		write_character(s[i]);
	return (len);
}


/**
 * print_binary - a function that prints an
 * unsigned integer in binary format
 * @num: the unsigned integer to be printed in binary
 *
 * Return: the number of character printed
 */

int print_binary(int num)
{
	int size;
	int *ptr;
	int i;

	if (num < 0)
		return (0);
	if (num == 0)
	{
		print_number(0);
		return (1);
	}

	for (size = 0, i = num; i > 0; i /= 2)
		size++;

	ptr = malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		ptr[i] = num % 2;
		num /= 2;
	}
	for (i = size - 1; i >= 0; i--)
		print_number(ptr[i]);

	return (size);
}


