#ifndef MS
#define MS

#include <stdio.h>
#include <stdlib.h>

void printResult(int A[], int size);
void merge(int array[], int const left, int const mid,
           int const right);
void mergeSort(int array[], int const begin, int const end);

#endif