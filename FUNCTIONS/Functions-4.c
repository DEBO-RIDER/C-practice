//Power of a Number in C

//normal method 
#include <stdio.h>

int CalculatePower(int N, int P) {
    if (P == 0) {
        return 1; // Any number to the power of 0 is 1
    }
    if (N == 0) {
        return 0; // 0 to any power is 0
    }

    int result = 1;
    for (int i = 1; i <= P; i++) {
        result *= N;
    }
    
    return result;
}

int main() {
    int N = 4;
    int P = 0;
    int power = CalculatePower(N, P);
    printf("%d\n",power);
    return 0;
}

// recursion

