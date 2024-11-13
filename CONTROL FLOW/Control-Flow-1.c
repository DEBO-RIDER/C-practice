//C Program to Print Prime Numbers From 1 to N using DMA.


#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter how many numbers you want to generate: ");
    scanf("%d", &n);

    // Allocate memory for the list of numbers
    int *listOfNumbers = (int *)malloc(n * sizeof(int));
    if (listOfNumbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill the list with numbers from 1 to n
    for (int i = 0; i < n; i++) {
        listOfNumbers[i] = i + 1;
    }

    // Print the list of numbers
    for (int i = 0; i < n; i++) {
        printf("%d ", listOfNumbers[i]);
    }
    printf("\n");

    // Allocate memory for the list of prime numbers
    int *listOfPrime = (int *)malloc(n * sizeof(int));
    if (listOfPrime == NULL) {
        printf("Memory allocation failed.\n");
        free(listOfNumbers);
        return 1;
    }

    // Identify and store prime numbers
    int primeIndex = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(listOfNumbers[i])) {
            listOfPrime[primeIndex++] = listOfNumbers[i];
        }
    }

    // Print the list of prime numbers
    for (int i = 0; i < primeIndex; i++) {
        printf("%d ", listOfPrime[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(listOfNumbers);
    free(listOfPrime);

    return 0;
}
