#include<stdio.h>
#include<stdlib.h>


typedef struct node {
    int data;
    struct node *next;
    struct node * prev;
}node;

void append(node **headref, int data){
    node * temp=*headref;
    node *new=(node *)malloc(sizeof(node));
    new->data=data;
    if(temp==NULL){
        new->next=NULL;
        new->prev=NULL;
        *headref=new;
        //return;
    }
//printf("L");
    while (temp->next !=NULL){
        temp=temp->next;
        //printf("i");
    }
    temp->next=new;
    new->next=NULL;
    new->prev=temp;
}


void printdouble(node ** head_ref){
    node * temp=*head_ref;
    while(temp->next !=NULL){
        temp=temp->next;
        printf("%d -> <- ",temp->data);
    }
}

int main(){

node * head=NULL;

append(&head,10);
append(&head,16);
append(&head,33);
printdouble(&head);

}