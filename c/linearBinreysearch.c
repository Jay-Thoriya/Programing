/*
#include<stdio.h>

int linear(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            printf("element %d is find in index nnumber is  %d ",element,i);
            return 0;
        }
    }
    printf("element is not find ");
}

int main(){

    int arr[]={20,34,56,4,43,35,7,88,43,2,4,55,6,54,44};
    int size= sizeof(arr)/sizeof(int);
    int element = 55;
    printf("Total array size is : %d \n",size);
    linear(arr,size,element);
    return 0;
}
*/
#include <stdio.h>

int binnery(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{

    int arr[] = {2, 4, 6, 9, 12, 43, 56, 78, 99, 135, 179, 295, 356, 576};
    int element = 135, binnery_search;
    int size = sizeof(arr) / sizeof(int);
    printf("Total array size is : %d \n", size);
    binnery_search = binnery(arr, size, element);
    printf("element %d is find in index nnumber is  %d ", element, binnery_search);
    return 0;
}