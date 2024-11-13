//binary to decimal

#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) {
    int decimal = 0, i = 0;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        binary /= 10;
        i++;
    }

    return decimal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}



//decimal to binary

#include <stdio.h>

long decimalToBinary(int decimal) {
    long binary = 0;
    int i = 1;

    while (decimal != 0) {
        int remainder = decimal % 2;
        binary += remainder * i;
        decimal /= 2;
        i *= 10;
    }

    return binary;
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    long binary = decimalToBinary(decimal);
    printf("The binary equivalent is: %ld\n", binary);

    return 0;
}
