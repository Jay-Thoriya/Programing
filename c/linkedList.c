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

void circulerlinkedlist(struct Node *frist)
{
    struct Node *ptr = frist;
    
    do{
        printf("element is : %d", ptr->data);
        ptr = ptr->next;
    }while (ptr != frist);
    
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

   // linkedListtraveser(frist);
   circulerlinkedlist(frist);

    return 0;
}