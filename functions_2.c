#include "main.h"


/**
* print_number - prints an unsigned integer
* @n: the integer to be printed
*
* Return: the number of digits printed
*/

int print_number(int n)
{
	int found, y, count;

	found = 0;
	for (y = 1000000000; y >= 10; y /= 10)
	{
		if (n >= 0)
		{
			if (n / y > 0 || (n / y == 0 && found > 0))
			{
				write_character('0' + (n / y));
				found++;
				count++;
				n %= y;
			}
		}
		else if (n < 0 && n / y < 0 && found == 0)
		{
			write_character('-');
			write_character('0' - (n / y));
			count += 2;
			found++;
			n %= y;
		}
		else if (n < 0 && found > 0)
		{
			write_character('0' - (n / y));
			count++;
			n %= y;
		}
	}
	if (n < 0)
		write_character('0' - n);
	else
		write_character('0' + n);
	return (++count);
}


/**
* is_in - checks for membership of a character
* in an array of characters
* @c: the character to be checked for
*
* Return: 1 if character is in array, 0 otherwise
*/

int is_in(char c)
{
	char specifiers[] = "csdibR%";
	int i;

	i = 0;
	while (specifiers[i])
	{
		if (c == specifiers[i])
			return (1);
		i++;
	}
	return (0);
}
