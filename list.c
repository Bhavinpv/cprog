#include<stdio.h>
#include<stdlib.h>


// (Head) n1 -> n2 -> n3-> NULL

typedef struct node {
 int value;
 struct node *next;
}node;   // Created a datatype Node


void append(node** head_ref,int data){

node* new =(node *)malloc(sizeof(node));
new->value=data;

if (*head_ref==NULL){
    *head_ref=new;
    new->next=NULL;
}

else{
    node * temp;
    temp=*head_ref;
while(temp->next !=NULL){
    temp=temp->next;
}
temp->next = new;
new->next=NULL;
}


}

void insert_atbeginning(node **head_ref , int data){
node * new=(node *)malloc(sizeof(node));
new->value=data;
new->next=*head_ref;
*head_ref=new;
}

void insert_middle(node ** head_ref,int data){
node * s_temp=*head_ref;
node * d_temp=*head_ref;
node * new=(node*)malloc(sizeof(node));
while(d_temp !=NULL && d_temp->next !=NULL){
s_temp=s_temp->next;
d_temp=d_temp->next->next;

}


new->value=data;
new->next=s_temp->next;
s_temp->next=new;

}


void print_list(node **head_ref){
node *temp= *head_ref;

if(temp==NULL){
    printf("The List is Empty");
}

while(temp!=NULL){
    
printf("%d -> ",temp->value);
temp=temp->next;
}
printf("\n");
}

void delete_bydata(node ** head_ref,int data){
node * temp=* head_ref;
node * prev=*head_ref;
while(temp->value!=data){
    prev=temp;
    temp=temp->next;
}
prev->next=temp->next;
free(temp);

}

void deleteList(node** head_ref)
{
   
   struct node* next;
 
   while (*head_ref != NULL) 
   {
      next=*head_ref;
      *head_ref=(*head_ref)->next;
      free(next);
   }
   
   *head_ref = NULL;
}

void reverse(node ** head_ref){
node * curr = *head_ref;
node * nnext=NULL;
node * prev=NULL;

while(curr!=NULL){
    nnext=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nnext;

}
*head_ref=prev;
}


int main(){
node * head=NULL;
append(&head,5);
append(&head,10);
append(&head,11);
append(&head,14);
insert_atbeginning(&head,3);
insert_atbeginning(&head,2);
append(&head,22);
print_list(&head);
insert_middle(&head,123);
print_list(&head);
insert_middle(&head,111);
print_list(&head);
delete_bydata(&head,5);
print_list(&head);
delete_bydata(&head,11);
print_list(&head);
//deleteList(&head);
//print_list(&head);
reverse(&head);
print_list(&head);
}

