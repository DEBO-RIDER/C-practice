//C program to add two complex numbers using struct.

#include <stdio.h>

typedef struct {
    int real;
    int img ;
    
}Complex;

Complex add(Complex x ,Complex y){
    Complex sum;
    sum.real = x.real + y.real;
    sum.img = x.img + y.img;
    return sum ;
}
int main() {
    Complex x,y,sum;
    printf("enter real and imaginary parts of first complex no. :");
    scanf("%d%d",&x.real,&x.img);
    printf("enter real and imaginary parts of second complex no. :");
    scanf("%d%d",&y.real,&y.img);

    sum = add(x,y);

    printf("the result is %d + %di\n",sum);

    return 0;
}