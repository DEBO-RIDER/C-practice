//C Program to Reverse a String Using Recursion

#include <stdio.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap the characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with the next positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    // Calculate the length of the string
    int length = strlen(str);

    // Reverse the string using the reverseString function
    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
