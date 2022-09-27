#ifndef QS
#define QS

#include <stdlib.h>
#include <stdio.h>

void swap(int* a, int* b);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void printResult(int array[], int size);

#endif