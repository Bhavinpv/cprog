#include <stdio.h>
//# pragma pack(1)
int main() {    

    struct abc {
        int a;
        char b;
        int c;
    };

struct{
    int int_a;

    struct{
        char ch_c;
    }z;
}abb;

    //int number1, number2, sum;
    
    //printf("Enter two integers: ");
    //scanf("%d %d", &number1, &number2);

    // calculate the sum
    //sum = number1 + number2;      
    
    //printf("%d + %d = %d \n", number1, number2, sum);
struct abc bhav;
    //printf("%d",sizeof(abc));
    printf("%d\n",sizeof(double));
 
 struct abc * s_ptr = &bhav;
 printf("%p , %p ,%p , %p \n",s_ptr,&(s_ptr->a),&(s_ptr->b),&(s_ptr->c));
printf("%d, %d \n", sizeof(int),sizeof(float));
    
    return 0;
}

