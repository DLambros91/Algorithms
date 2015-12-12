#include <stdio.h>

/*
 * Recursive Fibonacci Sequence
 */

int fib1(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fib1(n-1) + fib1(n-2);
}

int main(int argc, char ** argv) 
{
	if (argv[1] == NULL)
	{
		printf("Invalid input\n");
		printf("Must specify integer argument\n");
		return 0;
	}
	else
	{
		printf("%d\n", fib1(atoi(argv[1])));
		return 0;
	}
}
