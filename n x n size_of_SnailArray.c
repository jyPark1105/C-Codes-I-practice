#include <stdio.h>

int setNum()
{
	int num;
	scanf("%d", &num);
	return num;
}

void snail_Array(int n)
{
	int A[n][n] = {};
	int i = 0, c = 1;
	int j, k;
	for(k = 0; k < n/2; k++)
	{
		i = k;
		for(j = k; j < n-k-1; j++)		// When Ends 1 : i = 0, j = n-1
		{
			A[i][j] = c;
			c++;
		}
		
		for(i = k; i < n-k-1; i++)		// When Ends 2 : i = n-1, j = n-1 
		{
			A[i][j] = c;
			c++;
		}
	
		for(j = n-k-1; j > k; j--)				// When Ends 3 : i = n-1, j = 0
		{
			A[i][j] = c;
			c++;
		}
	
		for(i = n-k-1; i > k; i--)				// When Ends 4 : i = 0, j = 0
		{
			A[i][j] = c;
			c++;
		}
	}
	if(n % 2 == 1)								// if n is odd -> center value is NULL -> modify as n^2 value.
		A[n/2][n/2] = n*n;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)					// Harmonically printed as using "\t"(Backfeed). 
		{
			printf("%d\t", A[i][j]);		
		}
		printf("\n\n");
	}
	
}

int main(void)
{
	printf("Set the value of size about snail array. : ");
	int N = setNum();
	printf("the value of n is : %d\n", N);
	snail_Array(N);
	return 0;
}
