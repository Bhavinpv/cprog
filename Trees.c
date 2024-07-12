#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;


void swap(int * a,int * b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
int arr[6]={2,4,1,3,10,5};

for(int i=0;i<6;i++){
    for(int j=i;j<6;j++){
        if( arr[i]> arr[j]){
        swap(&arr[i],&arr[j]);
        }
    }
}

for(int j=0;j<6;j++){
    printf("%d",arr[j]);
}

}
