#include <stdio.h>

// Modify the array pointer variable -> The pointer variable that is pointing to 2-dimensional array
int main(void)
{
	int A[3][4] = {{10, 20, 30, 40}, {5, 15, 25, 35}, {13, 23, 33, 43}};
	int(*pA)[4] = A;
	int i, j;
	for (i = 0; i < 3; i++)									// Vertical
	{
		for (j = 0; j < 4; j++)								// Parallel
		{
			printf("A[%d][%d] = %d\n", i, j, pA[i][j]);		// print the value of array A. Using the array pointer (to array A)
		}
	}
	return 0;
}