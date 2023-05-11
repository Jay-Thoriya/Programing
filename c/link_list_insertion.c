#include<stdio.h>
#include<stdlib.h>

struct node
{
    int moviesData;
    struct node * next;
};


void linkedListtraveser(struct node * ptr)
{
    while (ptr != NULL)
    {
        printf(" Element is : %d \n",ptr->moviesData);
        ptr = ptr->next;
    }
}

// case : 1  ( at first )
struct node * insertion_at_first(struct node * first,int val ){
 struct node * ptr =(struct node *)malloc(sizeof(struct node));
 ptr->moviesData=val;
 ptr->next= first;
 return ptr;
}

// case : 2 ( at end )
struct node * insertion_at_end(struct node * first , int moviesData){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=first;
    ptr->moviesData=moviesData;
    while(p->next != NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return first;   
}

 // cse 
int main(){

    struct node * first;
    struct node * second;
    struct node * third;
    struct node * fourth;


    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    
    first->moviesData=7;
    first->next=second;

    second->moviesData=3;
    second->next=third;

    third->moviesData=6;
    third->next=fourth;

    fourth->moviesData=1;
    fourth->next=NULL;

    first = insertion_at_first(first,2);
    insertion_at_end(first,9);
    insertion_at_end(first,23);
    linkedListtraveser(first);
    return 0;
}
