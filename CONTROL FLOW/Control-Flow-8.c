//C Program to Print Fibonacci Series

//using loop
#include <stdio.h>
#include <stdlib.h>

int main() {
    int Range;
    printf("Enter the range: ");
    scanf("%d", &Range);

    // Allocate memory for Fibonacci sequence
    int *FibonacciNo = (int *)malloc(Range * sizeof(int));
    if (FibonacciNo == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the first two Fibonacci numbers
    if (Range >= 1) {
        FibonacciNo[0] = 0;
    }
    if (Range >= 2) {
        FibonacciNo[1] = 1;
    }

    // Compute the rest of the Fibonacci numbers
    for (int i = 2; i < Range; i++) {
        FibonacciNo[i] = FibonacciNo[i - 1] + FibonacciNo[i - 2];
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", Range);
    for (int i = 0; i < Range; i++) {
        printf("%d ", FibonacciNo[i]);
    }
    printf("\n");

    // Free allocated memory
    free(FibonacciNo);
    return 0;
}

//using recursion 

#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int Fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

// Function to print Fibonacci sequence up to a given range
void printFibonacciSequence(int range) {
    printf("Fibonacci sequence up to %d terms:\n", range);
    for (int i = 0; i < range; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);

    printFibonacciSequence(range);

    return 0;
}
