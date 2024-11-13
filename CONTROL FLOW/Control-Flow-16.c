//C Program To Check Neon Number


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool NeonNumber(int N) {
    int sum = 0;
    int SqN = N * N;  
    while (SqN != 0) { 
        int digit = SqN % 10;
        sum += digit;
        SqN /= 10;  
    }
    if (sum == N) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if (NeonNumber(N)) {
        printf("The number is a neon number\n");
    } else {
        printf("The number is not a neon number\n");
    }
    return 0;
}
