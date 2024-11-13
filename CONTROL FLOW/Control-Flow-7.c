//C Program to Make a Simple Calculator

// using if-else
#include <stdio.h>
#include <string.h>

int Calculator(int a, int b, char operation[]) {
    if (strcmp(operation, "add") == 0) {
        return a + b;
    } else if (strcmp(operation, "sub") == 0) {
        return a - b;
    } else if (strcmp(operation, "mul") == 0) {
        return a * b;
    } else if (strcmp(operation, "div") == 0) {
        if (b != 0) {
            return a / b;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 0; // Handle division by zero
        }
    } else {
        printf("Invalid operation.\n");
        return 0;
    }
}

int main() {
    float a, b;
    printf("Enter the two numbers:\n");
    scanf("%f %f", &a, &b);

    char operation[4]; 
    printf("Enter the operation (add/sub/mul/div) you want to do:\n");
    scanf("%s", operation);

    printf("Your final result is: %f\n", Calculator(a, b, operation));

    return 0;
}


// using switch-case

#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;

    // Read the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    // Read the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);
    
    // Define all four operations in the corresponding
    // switch-case
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
         res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = -DBL_MAX;
    }
    if(res!=-DBL_MAX)
      printf("%.2lf", res);
    
    return 0;
}

