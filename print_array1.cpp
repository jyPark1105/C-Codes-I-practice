#include <stdio.h>


int define_Size(void)											// Set the input size
{
	int size;
	printf("Enter the array size, smaller than '256' : ");		// Start the program
	scanf_s("%d", &size);										// Set the Array SIZE
	return size;
}

void Insertion_Sort(int* arr, int SIZE)							
{
	int key = 0;
	int i, j;
	for (j = 1; j < SIZE; j++)			// 1st index's key value is "already sorted" first (from 2nd index to Last index)
	{
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key)	// Insertion Sort : stable --> thus, not equal
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
	printf("Sorted array1 : {");
	for (i = 0; i < SIZE - 1; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d}\n\n", arr[SIZE - 1]);
}

void even_num(int *arr, int SIZE) // int *p = &arr;
{
	int i;
	for(i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}
	printf("\n");
}

void odd_num(int *arr, int SIZE)
{
	int j;
	for (j = 0; j < SIZE; j++)
	{
		if (arr[j] % 2 == 1)
			printf("%d ", arr[j]);
	}
	printf("\n");
}

int main(void)
{
	int arr_val, i;							// Value of Array -> arr_num
	int arr_size = define_Size();			
	int array1[256] = {};
	for(i = 0; i < arr_size; i++)
	{
		printf("Array[%d] : ", i);
		scanf_s("%d", &arr_val);
		array1[i] = arr_val;
	}
	printf("Original Array : {");
	for (i = 0; i < arr_size - 1; i++)
	{
		printf("%d,", array1[i]);
	}
	printf("%d}\n\n", array1[arr_size - 1]);
	Insertion_Sort(array1, arr_size);
	printf("odd : ");
	odd_num(array1, arr_size);
	printf("even : ");
	even_num(array1, arr_size);
	return 0;
}