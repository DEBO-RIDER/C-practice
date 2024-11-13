//Write a C program to find the factorial of the given number.

// using loop 

#include <stdio.h>

int main() {
    int No, Fact = 1;
    printf("enter a number :");
    scanf("%d", &No);

    if (No < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else if (No == 0) {
        printf("The factorial of 0 is 1");
    } else {
        for (int i = 1; i <= No; i++) {
            Fact *= i;
        }
        printf("The factorial of %d is %d", No, Fact);
    }
   
    return 0;
}

// using recursion 

#include <stdio.h>

int CalculateFactorial(int No) {
    if (No < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return -1; 
    } else if (No == 0) {
        return 1;
    } else {
        return No * CalculateFactorial(No - 1);
    }
}

int main() {
    int No;
    printf("Enter a number: ");
    scanf("%d", &No);

    int Fact = CalculateFactorial(No);
    if (Fact != -1) { 
        printf("The factorial of %d is %d\n", No, Fact);
    }

    return 0;
}



