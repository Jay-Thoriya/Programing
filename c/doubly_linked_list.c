#include<stdio.h>
#include<stdlib.h>

struct Node{
 int data;
 struct Node * prev;
 struct Node * next;

};

void doubly_travsel(struct Node * frist){

  struct Node * ptr = frist;
  
printf("front travsel in dobly linked list \n");
  while(ptr->next != NULL){
    printf("Element is : %d \n",ptr->data);
    ptr=ptr->next;
  }
    printf("Element is : %d \n",ptr->data);
  
printf("reverse travsel in dobly linked list \n");

while(ptr->prev != NULL){
    printf("Element is : %d \n",ptr->data);
    ptr=ptr->prev;
  }
    printf("Element is : %d \n",ptr->data);
  
}

int main(){
 struct Node * frist;
 struct Node * second;
 struct Node * thord;
 struct Node * forth;

 frist = (struct Node *)malloc(sizeof(struct Node));
 second = (struct Node *)malloc(sizeof(struct Node));
 thord = (struct Node *)malloc(sizeof(struct Node));
 forth = (struct Node *)malloc(sizeof(struct Node));

 frist->next =second;
 frist->prev = NULL;
 frist->data =9;

 second->next = thord;
 second->prev = frist;
 second->data = 6;

 thord->next = forth;
 thord->prev = second;
 thord->data = 3;

 forth->next = NULL;
 forth->prev = thord;
 forth->data = 8;
 
 doubly_travsel(frist);
 return 0;

}