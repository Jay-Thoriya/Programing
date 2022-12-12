#include<stdio.h>
#include<stdlib.h>


struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void creatarray(struct myarray *a, int tsize,int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}

void show(struct myarray *a){
  
   for(int i=0;i< a->used_size;i++){
     printf("%d\t",a->ptr[i]);
   }
}

void getdata(struct myarray *a){
    for(int i=0;i<a->used_size;i++){
        printf("enter a number %d : ",i);
        scanf("%d",&a->ptr[i]);
    }
}

int main(){
    struct myarray marks;
    creatarray(&marks,10,5);
    printf("we  are runing getdata \n");
    getdata(&marks);
    printf("we are runing show function \n ");
    printf("you have enter element is array ia : ");
    show(&marks);
    return 0;
}