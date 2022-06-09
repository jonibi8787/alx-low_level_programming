#include "main.h"
/**
* main - function return 0
* Return: Success
*/
int main(void)
{
	int n;

	for (int n = 0; n < 100; n++)
	{
		if (n % 3 == 0)
			_putchar('Fizz');
		else if (n % 5 == 0)
			_putchar('Buzz');
		else if (n % 3 == 0 && n % 5 == 0)
			_putchar('FizzBuzz');
		else
			_putchar('n');
	}
	_putchar('Buzz');
	return (0);

}


