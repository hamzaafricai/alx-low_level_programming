#include <stdio.h>
/**
 * _islower - function to check if character is lowercase
 * @c: check input of fonction
 * Return:0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
