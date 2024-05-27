#include<stdio.h>

int fun(int a, int b){
    return a+b;
}
int main(){

int (*fun_ptr)(int,int);
fun_ptr=&fun;

printf("%d",fun_ptr(3,4));



 

}



 