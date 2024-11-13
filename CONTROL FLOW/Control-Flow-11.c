// C Program to Print Armstrong Numbers Between 1 to 1000
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is an Armstrong number
bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;

    // Get the number of digits
    int K = log10(temp) + 1;

    // Calculate the sum of the digits raised to the power of num_digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, K);
        temp /= 10;
    }

    // Return whether the sum is equal to the original number or not
    return (sum == N);
}

int main() {
    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {
            printf(" %d ", i);
        }
    }printf("\n");

    return 0;
}

