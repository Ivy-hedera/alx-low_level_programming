#include "main.h"
#include <stdio.h>

/**
 * rev_string - function reverses a string
 * @s: parameter of the function
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int length1;
	int length2;

	length1 = 0;
	length2 = 0;
	while (s[length] != '\0')
		length1++;

	length2 = length1 - 1;
	for (i = o; i < length1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
