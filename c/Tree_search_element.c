#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node* creating(int data ){
   struct node * n;
   n = (struct node *)malloc(sizeof (struct node));
   n->data=data;
   n->left=NULL;
   n->right=NULL;
   return n;
}

struct node* search( struct node* root , int key){
    if(root == NULL){
        return NULL;
    }
    if( key == root->data){
        return root;
    }
    else if(key < root->data){
        return search(root->left ,key);
    }
    else{
        return search(root->right,key);
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

 struct node * n = search(p,4);
 printf("found : %d ",n->data);

    return 0;
}