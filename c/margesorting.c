// Online C compiler to run C program online
#include <stdio.h>

void display(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void marge(int A[], int mid, int low, int high)
{
    int i, j, k,B[100];
    i = low;
    j = mid+1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i]<A[j])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while (i<=mid)
    {
        B[k]=A[i];
        k++;
        i++;
    }
    while (j<=high)
    {
        B[k]=A[j];
        k++;
        j++;
    }
    for (int i = low; i <=high; i++)
    {
        A[i]=B[i];
    }
    
}

void margsorting(int A[], int low, int high)
{
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        margsorting(A, low, mid);
        margsorting(A, mid + 1, high);
        marge(A, mid, low, high);
    }
}

int main()
{

    int A[] = {23, 34, 1, 76, 22, 46, 86, 3};
    // int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A) / sizeof(A[0]);
    printf("%d\n",n);
    display(A, n);
    margsorting(A, 0, n-1);
    display(A, n);

    return 0;
}