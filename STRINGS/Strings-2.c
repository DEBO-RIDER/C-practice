//C Program to Add 2 Binary Strings

#include <stdio.h>
#include <string.h>

void addBinaryStrings(char a[], char b[], char result[]) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1; 
    int carry = 0; 
    int k = 0; // Index for the result

    // Continue loop until all bits are added or there is a carry left
    while (i >= 0 || j >= 0 || carry == 1) {
        if (i >= 0) {
            carry += a[i] - '0'; // Convert character to integer and add to carry
            i--; 
        }
        if (j >= 0) {
            carry += b[j] - '0'; 
            j--; 
        }

        // Add the carry (which is the sum of the bits and any previous carry)
        result[k] = (carry % 2) + '0'; // Store the current bit of the sum in the result
        k++; 

        // Update carry
        carry /= 2; // Calculate the new carry (either 0 or 1)
    }

    result[k] = '\0';

    // Reverse the result since the addition was performed from the end
    for (int l = 0, m = k - 1; l < m; l++, m--) {
        char temp = result[l];
        result[l] = result[m];
        result[m] = temp;
    }
}

int main() {
    char a[100], b[100], result[101];

    printf("Enter first binary string: ");
    scanf("%s", a);
    printf("Enter second binary string: ");
    scanf("%s", b);

    addBinaryStrings(a, b, result);

    printf("Sum of the binary strings: %s\n", result);

    return 0;
}
