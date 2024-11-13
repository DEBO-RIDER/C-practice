// LCM of Two Numbers in C

//using mathematics formula 
#include <stdio.h>

// Function to calculate the GCD using the Euclidean algorithm
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the LCM using the GCD
int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int num1, num2,count=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int lcm = LCM(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
// using iterative approach 

#include <stdio.h>

int main() {
    int a , b , Max;
    if (a>b) {
        Max = a ;
    } else {
        Max = b ;
    }

    while(1){
        if(Max%a==0 && Max%b == 0){
            printf("the LCM of %d , %d is %d\n",a,b,Max);
            break;
        }
        Max++;
    }
    return 0;
}