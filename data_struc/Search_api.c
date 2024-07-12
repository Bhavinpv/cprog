#include <stdio.h>

int decide(char *string){
int i=0;
int c_f,c_i,c_s;
c_f=c_i=c_s=0;

while (i !=4){
    if(string[i]=='.'){
        c_f++;
    }
    else if (string[i]>=0 && string[i]<=9){
        c_i++;
    }
    else{
        c_s++;
    }
    i++;
}

if (c_f==1){
    return 1;
}

if(c_f==0 && c_i!=0){
    return 2;
}

}


int main() {    

char *string = malloc(100*sizeof(char));
printf("Give the input:\n");
scanf("%s",string);
int result=decide(string);


printf("%s\n",string);

    return 0;
}

