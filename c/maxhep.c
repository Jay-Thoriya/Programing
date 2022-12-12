#include<stdio.h>

void swap(int *a, int *b)
{
 int temp = *b;
 *b = *a; 
 *a = temp;
}

void printArray(char message[], int arr[], int n)
{

printf("%s ",message);

for (int i = 0; i < n; ++i)
{
printf("%d ", arr[i]);
}

printf("\n");
}

void heapify(int a[],int n,int i){
   int max,l,r;

   max=i;
   l=2*i+1;
   r=2*i+2;

   while(a[l]>a[max] && l<=n){
    max=l;
   }                                                    
   while(a[r]>a[max] && r<=n){
    max=r;
   }
   if(max!=i){
    swap(&a[i],&a[max]);
   }
   heapify(a,n,max);
}           

void sort(int a,int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        
        heapify(a,n,0);
    }
}            
int main(){
    int a[] ={5,6,7,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    int i=(n/2)-1;  
    printArray("Array : ", a, n);

   sort(a, n);

    for (int i = 0; i < n; ++i)
        {
        printf("%d ", a[i]);
        }

        printf("\n");
}