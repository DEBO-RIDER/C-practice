//WAP to swap two numbers.

#include <stdio.h>

int main() {
    int a = 3 , b = 5 , temp;
    printf("the value of a is %d and b is %d\n",a ,b);
    temp = a;
    a = b ;
    b = temp ;

    printf("the value of a is %d and b is %d\n",a,b);

    return 0;
}