#include<stdio.h>
#include<stdlib.h>

struct stack {
   int size;
   int top;
   int *arr;
};

int isempty(struct stack *ptr){
    if(ptr->top == -1 ){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if(ptr->top == ptr->size-1 ){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * ptr ,int  val ){
 if(isfull(ptr)){
    printf("array is full !\n");
 }
 else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
 }
}

int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("array is empty !!!\n ");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *s,int i){
 int arrayid = s->top - i + 1;
 if(arrayid < 0){
    printf("array element is invalid !! \n");
    return -1;
 }
 else{
    return s->arr[arrayid];
 }
}
int main(){

 struct stack * s;
 s->size = 7;
 s->top = -1;
 s->arr = (int *)malloc(s->size* sizeof(int));

 push(s,2);
 push(s,2);
 push(s,2);

for (int j = 1; j <= s->top+1 ; j++)
{
    printf("the value at index %d is %d\n",j , peek(s,j));
}


    return 0;
}