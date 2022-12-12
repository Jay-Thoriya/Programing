#include<stdio.h>

void display(int* A,int n){

    for(int i = 0;i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void bobblesort(int* A,int n){
    int issorted = 0;
        printf("Running bubble sorting algorithms !!!! \n");
    for (int i = 0; i < n-1 ; i++)
    {
       // printf("it is pass : %d \n",i+1);
        for (int j = 0; j < n-1-i ; j++)
        {
            issorted = 1;
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                issorted = 0;
            }
        }
        if(issorted){
            return;
        }
        
    }
    

}

int main(){

    int A[]={23,34,23,1,76,22,46,86,3};
    //int A[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    display(A,n);
    bobblesort(A,n);
    display(A,n);
    

    return 0;
}