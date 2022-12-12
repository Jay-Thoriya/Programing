#include <stdio.h>

void display(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <=pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quicksort(int A[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(A, low, high);
        quicksort(A, low, partitionindex - 1);
        quicksort(A, partitionindex + 1, high);
    }

}

int main()
{

    int A[] = {23, 34, 1, 76, 22, 46, 86, 3};
    // int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A) / sizeof(A[0]);
    display(A, n);
    quicksort(A, 0, n-1);
    display(A, n);

    return 0;
}