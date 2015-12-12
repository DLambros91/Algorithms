#include <stdio.h>
/*
 * Polynomial Fibonacci Sequence
 */

int fib2(int n)
{
	if (n == 0)
	{
		return 0;
	}
	
	int arr[n], i;
	
	arr[0] = 0;
	arr[1] = 1;
	
	for(i = 2; i <= n; i++)
	{
	    arr[i] = arr[i-1]+arr[i-2];
	}
	
	return arr[n];
}
int main(int argc, char ** argv) 
{
	if (argv[1] == NULL)
	{
		printf("Invalid input\n");
		printf("Must specify an integer argument\n");
		return 0;
	}
	else
	{
		printf("%d\n", fib2(atoi(argv[1])));
		return 0;
	}
}

