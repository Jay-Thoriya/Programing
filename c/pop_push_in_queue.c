#include<stdio.H>

int maxsize=5;
int queue[5];
int front=-1;
int rear=-1;

void enqueue(int val){
    if(rear==maxsize-1){
        printf("queue is overflow ");
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=val;
    }
    else{
        rear++;
        queue[rear]=val;
    }
    
}

void dequeue(){
    if(rear==-1 && front==-1){
        printf("queue is underflow ");
    }
    else if(front == rear){
        front=rear=-1;
    }
    else{
        printf("\ndequeue element is %d ",queue[front]);
        front++;
    }
}
void display(){

    if(front==rear){
        printf("no element in queue ");
    }
    else{
        for (int i = front; i <= rear ; i++)
        {
            printf("%d ",queue[i]);
        }
        
    }
}

int main(){
 enqueue(8);    
 enqueue(3);
 enqueue(4);
 enqueue(6);
 display();
 dequeue();    
 dequeue();
 dequeue();
 display();
    
}