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
	int c, d, e, f;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = '0'; d <= '8'; d++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				for (f = '1'; f <= '9'; f++)
				{
			putchar(c);
			putchar(d);
			putchar(' ');
			putchar('e');
			putchar('f');

			putchar(',');
			putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
