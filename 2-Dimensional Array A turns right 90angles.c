#include <stdio.h>

void rotation(int A[][4])
{
	int key1, key2, key3;
	int i, j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			key1 = A[j][3-i];
			key2 = A[3-i][3-j];
			key3 = A[3-j][i];
			
			A[j][3-i] = A[i][j];
			A[3-i][3-j] = key1;
			A[3-j][i] = key2;
			A[i][j] = key3;
		}
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("arr[%d][%d] : %d\n", i, j, A[i][j]);
		}
	}
	printf("\n\n");
}

int main(void)
{
	
	int key1, key2, key3;	// buffer(to keep the values that would be modified)
	int A[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	int i;
	for(i = 0; i < 4; i++)
	{
		printf("Rotation %d.\n", i+1);
		rotation(A);
	}
	return 0;
}
