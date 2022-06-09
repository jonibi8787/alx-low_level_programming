#include "main.h"
/**
* main - function return 0
* Return: Success
*/
int main(void)
{
	int n;

	for (int n = 0; n <= 100; n++)
	{
		if (n % 3 == 0)
			_putchar('Fizz');
		if else(n % 5 == 0)
			_putchar('Buzz');
		if else(n % 3 == 0 && n % 5 == 0)
			_putchar('FizzBuzz');
		else
			_putchar('n');
	}
	return (0);

}


