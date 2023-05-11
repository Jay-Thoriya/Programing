#include<stdio.h>
#include<malloc.h>

struct node{
    int moviesData;
    struct node * left;
    struct node * right;
};

struct node* creating(int moviesData ){
   struct node * n;
   n = (struct node *)malloc(sizeof (struct node));
   n->moviesData=moviesData;
   n->left=NULL;
   n->right=NULL;
   return n;
}


void Preoder(struct node * root){
 
    if(root != NULL){
        printf(" %d ",root->moviesData);
        Preoder(root->left);
        Preoder(root->right);

    }
}

void poshoder(struct node* root){
    if(root != NULL){
        poshoder(root->left);
        poshoder(root->right);
        printf("%d ",root->moviesData);
    }
}

/*
     7
    / \
   2   3 
  /     \
 4       9

*/

int main(){
 struct node * p = creating(7);
 struct node * p1 = creating(2);
 struct node * p2 = creating(3);
 struct node * p3 = creating(4);
 struct node * p4 = creating(9);

 p->left=p1;
 p->right=p2;

 p1->left=p3;
 p2->right=p4;

  Preoder(p);
  printf("\n");
  poshoder(p);
    return 0;
}