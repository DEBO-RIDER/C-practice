//C program to remove innitial zeroes of a string

#include <stdio.h>
#include <string.h>

/
void removeLeadingZeros(char str[]) {
    int i = 0, j = 0;

    // Skip leading zeros
    while (str[i] == '0') {
        i++;
    }

    // Shift characters to the left
    while (str[i] != '\0') {
        str[j++] = str[i++];
    }
    
    // Null-terminate the string
    str[j] = '\0';

    // If the string was all zeros, ensure at least one zero remains
    if (j == 0) {
        str[0] = '0';
        str[1] = '\0';
    }
}

int main() {
    char str[100];

    printf("Enter a string with leading zeros: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    removeLeadingZeros(str);

    printf("String after removing leading zeros: %s\n", str);

    return 0;
}
