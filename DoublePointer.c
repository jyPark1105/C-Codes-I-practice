#include <stdio.h>
#include <stdlib.h>		// To apply INT_MAX, INT_MIN values

int set_Arr_num(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void max_min(int *array, int **max, int **min, int SIZE)			// int *array = arr(== &arr[0]), int **max = &maxPtr (== maxPtr's address)
{
	int i, j;
	int max_val = INT_MIN;
	int min_val = INT_MAX;
	for (i = 0; i < SIZE; i++)
	{
		if (array[i] > max_val)
		{
			max_val = array[i];
		}
	}
	for (j = 0; j < SIZE; j++)
	{
		if (array[j] < min_val)
		{
			min_val = array[j];
		}
	}
	for (i = 0; i < SIZE; i++)
	{
		if (max_val == array[i])
		{
			*max = &array[i];
		}
		if (min_val == array[i])
		{
			*min = &array[i];
		}
	}
}

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int i;
	int A[5];
	printf("Press the values of an array A, sequently. then each value should be 'INTEGER'.\n");		// Start the Program

	for (i = 0; i < 5; i++)																				// Fill the values in the array A
		A[i] = set_Arr_num();
	printf("\n");
	for (i = 0; i < 5; i++)																				// to show in console
		printf("A[%d] = %d\n", i, A[i]);
	printf("\n");

	max_min(A, &maxPtr, &minPtr, 5);																	// Program's Prior Function

	for(i = 0; i < 5; i++)																				
		printf("&A[%d] = %p\n", i, &A[i]);																	// print the each address in the array A
	
	printf("\n");
	printf("Maximum value in array A & then it's address : %d, %p\n", *maxPtr, maxPtr);					// maxPtr -> point the MAXIMUM in the array A
	printf("Minimum value in array A & then it's address : %d, %p\n", *minPtr, minPtr);					// minPtr -> point the MINIMUM in the array A
	return 0;
}