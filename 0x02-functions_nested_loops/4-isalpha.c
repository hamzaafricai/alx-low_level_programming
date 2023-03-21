#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks if character is a letter both lowercase or uppercase
 * @c: takes input from other functions
 * Return: 0
 */
int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
