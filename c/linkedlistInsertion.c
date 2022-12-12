#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListtraveser(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}



// case 1
struct Node * linkedinsetionFrist(struct Node *frist,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = frist;
    return ptr;
}

//case 2
struct Node * linkedinsetioIndex(struct Node * frist , int data,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = frist;
    int i=0;
    while (i!=index-1)
    {
       p = p->next;
       p++;
    }
    ptr->data=data;     
    ptr->next = p->next ;
    p->next=ptr;
    return frist; 
    
}

struct Node * linkedinsetioend(struct Node * frist , int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = frist;
    ptr->data=data;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return frist;
    
}

// case 4

struct Node * linkedinsetioafternode(struct Node * frist , struct Node * prevNode , int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
   
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return frist;
    
}

int main()
{
    struct Node *frist;
    struct Node *second;
    struct Node *thord;
    struct Node *froth;

    // Allowcetion memory for nodes in the likeds lists
    frist = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thord = (struct Node *)malloc(sizeof(struct Node));
    froth = (struct Node *)malloc(sizeof(struct Node));

    // link frist and second nodes
    frist->data = 12;
    frist->next = second;

    // link second and thord nodes
    second->data = 25;
    second->next = thord;

    // link second and thord nodes
    thord->data = 39;
    thord->next = froth;
    
    // link thord and forth nodes
    froth->data = 50;
    froth->next = NULL;

    linkedListtraveser(frist);
 //   frist = linkedinsetionFrist(frist,56);
 //   linkedinsetioIndex(frist,56,1);
//      linkedinsetioend(frist,56);
    linkedinsetioafternode(frist,thord,56);
      linkedListtraveser(frist);


    return 0;
}