#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/****************************************************************
 * Name   : Demetrios Lambropoulos				*
 *								*
 * Input  : Two n-bit integers x and N, an integer exponent y	*
 * Output : x^y mod N						*
 ****************************************************************/

int modexp(int x, int y, int N)
{
	if (y == 0)
	{
		return 1;
	}
	
	int z = modexp(x, (int) floor((double)y/2.0), N);

	if ((y%2) == 0)
	{
		return ((z*z)%N);
	}
	else
	{
		return ((x*z*z)%N);
	}
}

int main(int argc, char ** argv)
{
	if ((argv[1] == NULL) || (argv[2] == NULL) || (argv[3] == NULL))
	{
		printf("Invalid Input\n");
		printf("Must specify three integer arguments\n");
		return 0;
	}
	else
	{
		printf("Value : %d\n", modexp(atoi(argv[1]), atoi(argv[2]), atoi(argv[3])));
		return 0;
	}
}
