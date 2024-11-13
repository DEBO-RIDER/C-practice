// hexa decimal to decimal
#include <stdio.h>
#include <string.h>
#include <math.h>


int hexToDecimal(char hex[]) {
    int len = strlen(hex);
    int base = 1; // 16^0
    int decimal = 0;

    // Extract characters as digits from last character
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 87) * base;
            base = base * 16;
        }
    }

    return decimal;
}

int main() {
    char hex[100];

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    int decimal = hexToDecimal(hex);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}


//decimal to hexadecimal

#include <stdio.h>

// Function to convert decimal to hexadecimal
void decimalToHex(int decimal, char hex[]) {
    int i = 0;
    while (decimal != 0) {
        int temp = decimal % 16;

        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 55;
        }

        i++;
        decimal = decimal / 16;
    }

    hex[i] = '\0';

    // Reverse the resulting string since the digits are in reverse order
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = hex[start];
        hex[start] = hex[end];
        hex[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int decimal;
    char hex[100];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToHex(decimal, hex);
    printf("The hexadecimal equivalent is: %s\n", hex);

    return 0;
}
