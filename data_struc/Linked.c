#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int value;
    struct node * next;
}node;

void insert(node ** root,int value){
    node * new= (node*)malloc(sizeof(node));
    node * ptr;
    new->next=NULL;
    new->value=value;
if (*root==NULL){
    *root=new;
}
else{
    ptr=*root;
    while(ptr ->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;

}

}



int main(){

int array[5]={1,2,3,4,5};
int i=0;
node * root=NULL;
while(i<5){
    insert(&root,array[i]);  
    //printf("%p",root);
    i++;
}

node * temp=root;
//printf("%p",temp);
while (temp!=NULL)
{

printf("%d ->",temp->value);
    temp= temp->next;


    /* code */
}


}