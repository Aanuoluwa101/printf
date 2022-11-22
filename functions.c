#inlcude "main.h"

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


