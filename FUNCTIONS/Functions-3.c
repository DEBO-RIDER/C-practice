//C Program to Find GCD or HCF of Two Numbers

// 1. using simple method 
#include <math.h>
#include <stdio.h>

int gcd(int a, int b)
{
    int result;
        if (a < b) {
            result = a;
        } else {
            result = b;
        }

    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
int main()
{
    int a = 98, b = 56;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}

// 2. Using Euclidean Algorithm

#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

   
    if (a > b){
        return gcd(a - b, b);
    }else{
        return gcd(a, b - a);
    }
        
    
}

int main()
{
    int a = 98, b = 56;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
