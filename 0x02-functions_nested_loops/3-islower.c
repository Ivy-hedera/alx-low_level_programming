#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: int used as argument for the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
