#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int moviesData;
    struct Node *next;
};

void linkedListtraveser(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is : %d \n", ptr->moviesData);
        ptr = ptr->next;
    }
}

// case 1
struct Node * deletionfrist(struct Node*frist){
  struct Node * ptr = frist;
  frist = frist->next;
  free(ptr);
  return frist;
  
}

// case 2
struct Node * detionatIndex (struct Node* frist , int index ){
    struct Node * p = frist ;
    struct Node * q = frist->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return frist;
}

// case 3
struct Node * detionatend(struct Node* frist){
    struct Node * p = frist ;
    struct Node * q = frist->next;
   while (q->next !=NULL)
   {
     p=p->next;
     q=q->next;
   }
   
    p->next = NULL;
    free(q);
    return frist;
}

// case 4
struct Node * deletionatpoint (struct Node* frist , int value ){
    struct Node * p = frist ;
    struct Node * q = frist->next;
    while (q->moviesData!=value && q->next!= NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->moviesData == value){
        p->next = q->next;
        free(q);
    }
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
    frist->moviesData = 12;
    frist->next = second;

    // link second and thord nodes
    second->moviesData = 25;
    second->next = thord;

    // link second and thord nodes
    thord->moviesData = 39;
    thord->next = froth;
    
    // link thord and forth nodes
    froth->moviesData = 50;
    froth->next = NULL;

    printf("befor calling deletion : \n");
    linkedListtraveser(frist); 
  //frist = deletionfrist(frist);
  //frist = detionatIndex(frist,2);     
  //frist = detionatend(frist);
  frist = deletionatpoint(frist,25);
    printf("after calling deletion : \n");
    linkedListtraveser(frist);

    return 0;
}