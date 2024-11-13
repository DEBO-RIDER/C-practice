//C Program to Check Whether a Number Can Be Express as Sum of Two Prime Numbers
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int N) {
    if (N <= 1) {
        return false;
    }
    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to check if a number can be expressed as the sum of two prime numbers
void checkSumOfTwoPrimes(int num) {
    bool found = false;
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            found = true;
        }
    }
    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
}

int main() {
    int num = 7;
    checkSumOfTwoPrimes(num);

    return 0;
}
