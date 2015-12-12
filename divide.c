#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/****************************************************************
 * Name  : Demetrios Lambropoulos				*
 * 								*
 * Input : Two n-bit integers x and y, where y >=1		*
 * Output: The quotient and remainder of x divided by y         *
 ****************************************************************/

int * divide(int x, int y)
{
	int * arr = calloc(2, sizeof(int *));

	if (x == 0)
	{
		arr[0] = 0;
		arr[1] = 0;
		return arr;
	}
	
	arr = divide((int) floor((double)x/2.0), y);

	arr[0] = 2*arr[0];
	arr[1] = 2*arr[1];

	if ((x%2) != 0)
	{
		arr[1] = arr[1] + 1;
	}
	
	if (arr[1] >= y)
	{
		arr[1] = arr[1] - y;
		arr[0] = arr[0] + 1;
	}

	return arr;
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
		int * ans;
		ans = divide(atoi(argv[1]), atoi(argv[2]));
		printf("Quotient : %d\n", ans[0]);
		printf("Remainder: %d\n", ans[1]);
		free(ans);
		return 0;
	} 
}
