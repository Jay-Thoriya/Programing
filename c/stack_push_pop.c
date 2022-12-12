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


int main(){

 struct stack * s;
 s->size = 7;
 s->top = -1;
 s->arr = (int *)malloc(s->size* sizeof(int *));

s->arr[0]=45;
s->top++;

if(isempty(s)){
    printf("it is empty stack !!\n");
}
else{
    printf("it is not empty stack !!\n");
}

//push(s,23);
  pop(s);
  pop(s);
 if(isempty(s)){
    printf("it is empty stack !!\n");
}
else{
    printf("it is not empty stack !!\n");
}
push(s,34);
push(s,34);
push(s,34);
pop(s);
if(isempty(s)){
    printf("it is empty stack !!\n");
}
else{
    printf("it is not empty stack !!\n");
}
push(s,34);

push(s,34);
    return 0;
}