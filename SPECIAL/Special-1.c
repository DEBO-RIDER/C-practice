// Write a C program to find the factorial of the given number using arrays 
#include <stdio.h>
#include <string.h>

// Function to multiply a string (representing a number)
// by an integer
void multiplyString(char num[], int factor) {
    int len = strlen(num);
    int carry = 0;

    for (int i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int product = digit * factor + carry;
        num[i] = (product % 10) + '0';
        carry = product / 10;
    }

    // Handling the carry by adding digits to the front
      // of the number
    while (carry) {
        for (int i = strlen(num); i >= 0; i--) {
            num[i + 1] = num[i];
        }
        num[0] = (carry % 10) + '0';
        carry /= 10;
    }
}

// Function to find factorial using a string
void factorialString(int N) {
  
    // Use a large enough buffer
    char fact[1000];
  
    // Initialize result as "1"
    strcpy(fact, "1");

    for (int i = 2; i <= N; i++) {
      
        // Multiply the string in each iteration
        multiplyString(fact, i);
    }

    printf("Factorial of %d is %s", N, fact);
}

int main() {
    int N = 5;
    factorialString(N);
    return 0;
}
