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

struct node* search( struct node* root , int key){
    if(root == NULL){
        return NULL;
    }
    if( key == root->moviesData){
        return root;
    }
    else if(key < root->moviesData){
        return search(root->left ,key);
    }
    else{
        return search(root->right,key);
    }
}


struct node * insert( struct node * root , int key){
    struct node * pre = NULL ;
    while(root !=NULL){
        pre=root;
        if(key == root->moviesData){
            printf("can not insert %d ,it allredy present .",key);
            return 0;
        }
        else if(key < root->moviesData){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node * new = creating(key);
    if(key<pre->moviesData){
        pre->left=new;
    }
    else{
        pre->right=new;
    }
}


/*
     7
    / \
   2   3 
  / \   \
 4   5   9

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

 insert(p,5);
 printf(" %d ",p->left->right->moviesData);
    return 0;
}