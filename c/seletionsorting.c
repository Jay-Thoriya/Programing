#include <stdio.h>

void display(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void seletionsorting(int *A, int n)
{
    int indexofmin, temp;
    printf("Running seletion sorting algorithms !!!! \n");
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

int main()
{

    int A[] = {23, 34, 1, 76, 22, 46, 86, 3};
    // int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A) / sizeof(A[0]);
    display(A, n);
    seletionsorting(A, n);
    display(A, n);

    return 0;
}