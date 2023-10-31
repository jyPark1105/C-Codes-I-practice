#include <stdio.h>

void array_Transfer(int (*arr1)[4], int arr2[][3])	// In parameters, these are "same".
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("A[%d][%d] : %d %d %d\n", i, j, arr1[i][j], (*(arr1 + i))[j], *(*(arr1 + i) + j)); // A[i][j] »Ì±â
		}
	}
	printf("\n\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("B[%d][%d] : %d %d %d\n", i, j, arr2[i][j], (*(arr2 + i))[j], *(*(arr2 + i) + j)); // A[i][j] »Ì±â
		}
	}
}

int main(void)
{
	int A[3][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };			// Normalization : Let's A[i] -> A', A'[j] = *(A'+j) = *(A[i]+j) = *(*(A+i)+j)
	int B[4][3] = { {13,14,15},{16,17,18},{19,20,21},{22,23,24} };
	array_Transfer(A, B);
	return 0;
}