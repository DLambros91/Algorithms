#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/******************************************************
 * Name: Demetrios Lambropoulos                       *
 * 						      *
 * Input : Two n-bit integers x and y, where y>=0     *
 * Output: The product of the two numbers	      *
 ******************************************************/
int multiply(int x, int y)
{
	if (y == 0)
	{
		return 0;
	}
	
	// Needs to be compiled with the -lm flag
	int z = multiply(x, (int) floor((double)y/2.0));

	if ((y%2) == 0)
	{
		return 2*z;
	}
	else
	{
		return x+2*z;
	}
}

int main(int argc, char ** argv)
{
	if ((argv[1] == NULL) || (argv[2] == NULL))
	{
		printf("Invalid Input\n");
		printf("Must specify two integer arguments\n");
		return 0;
	}
	else
	{
		printf("%d\n", multiply(atoi(argv[1]),atoi(argv[2])));
		return 0;
	}
}
