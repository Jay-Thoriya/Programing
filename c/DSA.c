// program :1

/*

#include<stdio.h>

void swap(int* a,int* b){

    int temp = *a;
    *a = *b;
    *b=temp;

}

int main(){
  int a,b;
  printf("Enter a two numbwr :");
  scanf("%d%d",a,b);

  printf("Befor calling function a : %d and b : %d",a,b);
  swap(&a,&b);
  printf("after calling function a : %d and b : %d",a,b);
    return 0;
}

*/

// program : 2

// using malloc
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)malloc(5*sizeof(int));

    for(int i=0;i<=5;i++){
        printf("Enter element in array %d :",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<=5;i++){
        printf("%d\t",ptr[i]);
    }
    free(ptr);
    return 0;
}

*/

// using calloc
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));

    for(int i=0;i<=5;i++){
        printf("Enter element in array %d :",i);
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<=5;i++){
        printf("%d\t",ptr[i]);
    }
    free(ptr);
    return 0;
}

*/

// program : 3
/*

#include<stdio.h>
#include<string.h>

struct employ
{
    int id;
    char name[50];
};

int main()
{
    struct employ e1;
    e1.id=90;
    strcpy(e1.name,"menio");
    printf("employ id is %d ",e1.id);
    printf("\n");
    printf("employ name is %d ",e1.name);
    return 0;
}

*/
// Bubble soriting
/*

#include <stdio.h>

void displaydata(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}
void bubblesorting(int *A, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        printf(" i loop : %d \n",i);
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" j loop : %d \n",j);
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
            displaydata(A,n);
        }
    }
}

int main()
{

    int A[] = {23, 43, 53, 12, 56, 32};
    int n = sizeof(A) / sizeof(A[0]);
    printf("Unsorted array is : ");
    displaydata(A, n);
    bubblesorting(A, n);
    printf("sorted array is : ");
    displaydata(A, n);
    return 0;
}

*/

#include <stdio.h>
void displaydata(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}

void insertionsorting(int a[], int n)
{
    int j, element_number;
    for (int i = 0; i < n; i++)
    {
        printf("for loop number : %d \n",i);
        element_number = a[i];
        j = i - 1;

        while (j >=0 && a[j] > element_number) 
        {
           
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = element_number;
     
    }
}

int main()
{
    int a[] = {8,9, 4, 3, 0};
    int n = sizeof(a) / sizeof(a[0]);
    printf("unsorted array\n");
    displaydata(a, n);
    printf("insertion sorting start running !!\n");
    insertionsorting(a, n);
    displaydata(a, n);
}