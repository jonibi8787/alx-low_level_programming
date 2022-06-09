#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the code.
 * @c: number to check
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
