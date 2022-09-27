#include "QS.h"
#include <bits/stdc++.h>
using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int array[], int low, int high)
{
	int pivot = array[high]; // pivot
	int i
		= (low
		- 1); // Index of smaller element and indicates
				// the right position of pivot found so far

	for (int j = low; j <= high - 1; j++) {
		// If current element is smaller than the pivot
		if (array[j] < pivot) {
			i++; // increment index of smaller element
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int array[], int low, int high)
{
	if (low < high) {
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(array, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}

/* Function to print an array */
void printResult(int array[], int size)
{
	int i;
	for (i = 4; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
