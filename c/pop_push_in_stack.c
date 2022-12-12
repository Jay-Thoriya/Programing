#include<stdio.h>

int maxsize = 6,val;
int stack[6];
int top=-1;

void push(int val){
 if(top == maxsize-1){
    printf("stack is overflow ");
 }
 else{
    top++;
    stack[top]=val;
 }
}

void pop(){
    if(top == -1){
        printf("stack is underflow ");
    }
    else{
        val = stack[top];
        top--;
        printf("stack pop element is %d \n",val);
    }
}

void display(){
    for (int i = 0; i <=top ; i++)
    {
        printf(" %d ",stack[i]);
    }
    
}



int main(){
push(8);
push(4);
push(2);
push(6);
push(3);
push(2);
display();
printf("\n");

pop();
pop();
pop();
pop();
display();
}