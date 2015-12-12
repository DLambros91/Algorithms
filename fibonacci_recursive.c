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
	printf("%d\n", fib1(6));
	return 0;
}