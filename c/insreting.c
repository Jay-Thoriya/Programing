#include<stdio.h>

void display (int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
}

int indinsertion (int arr[],int size,int element,int capesicty,int index){
 
 if(size>=capesicty){
    printf("sorry you array size is full");
    return -1;
 }
 else{
    for(int i=size;i>=index;i--){
      arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
 }
}

int inddelete (int arr[],int size,int capesicty,int index){
 
 if(size>=capesicty){
    printf("sorry you array size is full");
    return -1;
 }
 else{
    for(int i=index;i<size-1;i++){
      arr[i]=arr[i+1];
    }
    
    return 1;
 }
}

int main()
{
  
  int arr[100]={50,62,03,20,15,55};
  int size=6,element=1,index=3,result_insertion ,result_delete;
  display(arr,size);
  printf("\n");

  
  result_insertion=indinsertion(arr,size,element,100,index);
  size=size+1;
  if(result_insertion==-1){
   printf("sorry ! your array size is full ");
  }
  else{
    display(arr,size);
  }   
  printf("\n");

  result_delete = inddelete(arr,size,100,index);
  size=size-1;
  if(result_delete==-1){
   printf("sorry ! your array size is full ");
  }
  else{
    display(arr,size);
  }
  return 0;
  
}