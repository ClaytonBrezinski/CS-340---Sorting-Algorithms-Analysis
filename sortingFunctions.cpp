#ifndef SORTINGFUNCTIONS_CPP
#define SORTINGFUNCTIONS_CPP
#include "Header.h"

void insertionSort(int arr[], int length);
void mergeSort(int m, int n, int A[], int B[], int C[]);
void quickSort(int a[], int first, int last);
int pivot(int a[], int first, int last);
void swap(int& a, int& b);
void swapNoTemp(int& a, int& b);
void print(int a[], const int& N);

void insertionSort(int arr[], int length)
{
	int j, temp;

	for (int i = 0; i < length; i++)// may have to change i=#
	{
		j = i;

		while (j > 0 && arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

void mergeSort(int m, int n, int A[], int B[], int C[])
{
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;
	while (i < m && j < n) 
	{
		if (A[i] <= B[j]) 
		{
			C[k] = A[i];
			i++;
		}
		else 
		{
			C[k] = B[j];
			j++;
		}
		k++;
	}
	if (i < m) 
	{
		for (int p = i; p < m; p++) 
		{
			C[k] = A[p];
			k++;
		}
	}
	else 
	{
		for (int p = j; p < n; p++) 
		{
			C[k] = B[p];
			k++;
		}
	}
}

/**
* Quicksort.
* @param a - The array to be sorted.
* @param first - The start of the sequence to be sorted.
* @param last - The end of the sequence to be sorted.
*/
void quickSort(int a[], int first, int last)
{
	int pivotElement;

	if (first < last)
	{
		pivotElement = pivot(a, first, last);
		quickSort(a, first, pivotElement - 1);
		quickSort(a, pivotElement + 1, last);
	}
}

/**
* Find and return the index of pivot element.
* @param a - The array.
* @param first - The start of the sequence.
* @param last - The end of the sequence.
* @return - the pivot element
*/
int pivot(int a[], int first, int last)
{
	int  p = first;
	int pivotElement = a[first];

	for (int i = first + 1; i <= last; i++)
	{
		/* If you want to sort the list in the other order, change "<=" to ">" */
		if (a[i] <= pivotElement)
		{
			p++;
			swap(a[i], a[p]);
		}
	}

	swap(a[p], a[first]);

	return p;
}


/**
* Swap the parameters.
* @param a - The first parameter.
* @param b - The second parameter.
*/
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

/**
* Swap the parameters without a temp variable.
* Warning! Prone to overflow/underflow.
* @param a - The first parameter.
* @param b - The second parameter.
*/
void swapNoTemp(int& a, int& b)
{
	a -= b;
	b += a;// b gets the original value of a
	a = (b - a);// a gets the original value of b
}

/**
* Print an array.
* @param a - The array.
* @param N - The size of the array.
*/
void print(int a[], const int& N)
{
	for (int i = 0; i < N; i++)
		cout << "array[" << i << "] = " << a[i] << endl;
}




#endif
