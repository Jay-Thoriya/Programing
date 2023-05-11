#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int moviesData;
    struct Node *next;
};

void circulerlinkedlist(struct Node *frist)
{
    struct Node *ptr = frist;

   do
   {
    printf("element is : %d\n",ptr->moviesData);
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

    frist->moviesData = 7;
    frist->next = second;

    second->moviesData = 4;
    second->next = thord;

    thord->moviesData = 9;
    thord->next = forth;

    forth->moviesData = 3;
    forth->next = five;

    five->moviesData = 6;
    five->next = frist;

    circulerlinkedlist(frist);
    
    return 0 ;
}