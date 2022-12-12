#include<stdio.h>

void display(int* A,int n){
  
    for(int i = 0;i < n; i++)
    
      {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertion(int* A,int n){
    int key,j;
        printf("Running insertion sorting algorithms !!!!  \n");
    for(int i=0;i<=n-1;i++){
        key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        
    }
}

int main(){

    int A[]={23,34,1,76,22,46,86,3};
    int n = sizeof(A)/sizeof(A[0]);
    display(A,n);
    insertion(A,n);
    display(A,n);
    return 0;
}