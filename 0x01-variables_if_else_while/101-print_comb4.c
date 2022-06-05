#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, d, e;

	for (c = '0'; c < '8'; c++)
	{
		for (d = '1'; d <= '8'; d++)
		{
			for (e = '2'; e <= '9'; e++)
			{
			if (c < d && d < e)
			{
			putchar(c);
			putchar(d);
			putchar(e);
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
