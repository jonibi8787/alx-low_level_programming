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
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else
			_putchar('n');
	}
	printf("Buzz");
	printf("\n");

	return (0);

}


