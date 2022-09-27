#include "InsertionSort/IS.h"
#include "MergeSort/MS.h"
#include "QuickSort/QS.h"
#include <iostream>
using namespace std;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    FILE *fp;
    int *A, i, n;
    /*open input file*/
    fp = fopen("INPUT.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: cannot open input file \n");
        exit(1);
    }
    else
    {
        /*copy data to array*/
        fscanf(fp, "%d", &n);
        A = (int *)malloc(n * sizeof(int));

        // if memory can't be allocated
        if (A == NULL)
        {
            fprintf(stderr, "Error: cannot allocate memory\n");
            exit(1);
        }
        for (i = 0; i < n; i++)
            fscanf(fp, "%d", &A[i]);
        for (i = 0; i < n - 1; i++)
            printf("%d ", A[i]);
        printf("%d\n", A[n - 1]);
        free(A);
        fclose(fp);
    }
    /*Call sorting algorithm*/
    if (argc < 3 && argc > 3)
    {
        printf("Usage: ./PJ1 alg flag\n\talg should be in {InsertionSort, MergeSort, QuickSort}\n\tflag should be in {0, 1}\n");
        exit(1);
    }
    else
    {
        if (argv[1] == "InsertionSort")
        {
            int A[i];
            int n = sizeof(A) / sizeof(A[0]);
            insertionSort(A, n);
            if (A[1] == 1)
            {
                cout << "\nA: ";
                printResult(A, n);
                return 0;
            }
            else
            {
                return (0);
            }
        }
        else if (argv[1] == "MergeSort")
        {
            A[i] ;
            int n = sizeof(A) / sizeof(A[0]);
            mergeSort(A, 0, n - 1);
            if (A[1] == 1)
            {
                cout << "\nA: ";
                printResult(A, n);
                return 0;    
            }
            else
            {
                return 0;
            }
            
        }
        else if (argv[1] == "QuickSort")
        {
            A[i];
            int n = sizeof(A) / sizeof(A[0]);
	        quickSort(A, 0, n - 1);
            if(A[1] == 1)
            {
	            cout << "\nA: ";
	            printResult(A, n);
	            return 0;
            }
            else{
                return (0);
            }
        }
        else
        {
            printf("Usage: \n\targv[1] can only be either {InsertionSort, MergeSort, QuickSort}");
        }
    }
    return 0;
}
