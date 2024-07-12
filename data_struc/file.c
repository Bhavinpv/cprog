#include<stdio.h>
#include <stdlib.h>



int main (){
    FILE *fptr;

    fptr=fopen("Document2.txt","w");

    if(fptr==NULL){
        printf("No");
    }
    else{
        printf("Yes");
    }

char * data;
//data = (char *) malloc(10*sizeof(char));
data= "INDIA12";
data="123";

fputs(data,fptr);
fclose(fptr);

}