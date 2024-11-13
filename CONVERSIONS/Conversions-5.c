//C Program for Octal to Decimal Conversion
#include <stdio.h>
#include <math.h>

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;

    while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, i);
        octal /= 10;
        i++;
    }

    return decimal;
}

int main() {
    int octal;

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    int decimal = octalToDecimal(octal);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}


//C Program for Decimal to Octal Conversion

#include <stdio.h>


int decimalToOctal(int decimal) {
    int octal = 0, i = 1;

    while (decimal != 0) {
        int remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
        i *= 10;
    }

    return octal;
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int octal = decimalToOctal(decimal);
    printf("The octal equivalent is: %d\n", octal);

    return 0;
}
