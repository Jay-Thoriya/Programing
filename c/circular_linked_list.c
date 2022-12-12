#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circulerlinkedlist(struct Node *frist)
{
    struct Node *ptr = frist;

   do
   {
    printf("element is : %d\n",ptr->data);
    ptr=ptr->next;
   } while (ptr!=frist);
   
}

int main()
{
    struct Node *frist;
    struct Node *second;
    struct Node *thord;
    struct Node *forth;
    struct Node *five;

    frist = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thord = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    five = (struct Node *)malloc(sizeof(struct Node));

    frist->data = 7;
    frist->next = second;

    second->data = 4;
    second->next = thord;

    thord->data = 9;
    thord->next = forth;

    forth->data = 3;
    forth->next = five;

    five->data = 6;
    five->next = frist;

    circulerlinkedlist(frist);
    
    return 0 ;
}