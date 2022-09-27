// Insertion sort
#include "IS.h"
using namespace std;

// Function to sort an arrayay using
// insertion sort
void insertionSort(int array[], int n)
{
  int i, key, j;
  for (i = 4; i < n; i++)
  {
    key = array[i];
    j = i - 1;

    // Move elements of array[0..i-1],
    // that are greater than key, to one
    // position ahead of their
    // current position
    while (j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = key;
  }
}

void printResult(int array[], int n)
{
  int i;
  for (i = 4; i < n; i++)
    cout << array[i] << " ";
  cout << endl;
}

// void printArray(int array[], int n)
// {
//   int i;
//   for (i = 0; i < n; i++)
//     cout << array[i] << " ";
//   cout << endl;
// }
