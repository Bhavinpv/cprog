#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{

    int data;
    struct node * next;
}node;

void append(node** head_ref , int data){
        node * new=(node*)malloc(sizeof(node));
        new->data=data;
        
    if (*head_ref==NULL){
        *head_ref=new;
        new->next=NULL;
    }

node * temp=*head_ref;
    while(temp->next !=NULL){
        temp=temp->next;
}
temp->next=new;
new->next=NULL;
}

void make_circular(node ** head_ref){
 node * temp = *head_ref;
 while(temp ->next!=NULL){
    temp = temp->next;
 }
temp->next=*head_ref;

}

void printlist(node ** head_ref){
node * temp = *head_ref;
// printf("%p",temp->next);
// printf("%p",*head_ref);
while (temp->next !=NULL && temp->next != *head_ref){
    printf("%d ->",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);
}

bool check_circular(node **head_ref){
    node * temp = *head_ref;

    if (temp==NULL){
      return true;
}

while( temp->next !=NULL && temp->next !=*head_ref){
    temp=temp->next;
}

if (temp->next==NULL){
    return false;
}

else{
    return true;
}
}



int main(){
    node * head=NULL;
append(&head,4);
append(&head,5);
append(&head,10);

make_circular(&head);

//printf("%d",check_circular(&head));
printlist(&head);


}