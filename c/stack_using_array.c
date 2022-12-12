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


int main(){

 struct stack * s;
 s->size = 20;
 s->top = -1;
 s->arr = (int *)malloc(s->size* sizeof(int *));

s->arr[0]=45;
s->top++;

if(isempty(s)){
    printf("it is empty stack !!");
}
else{
    printf("it is not empty stack !!");

}

    return 0;
}