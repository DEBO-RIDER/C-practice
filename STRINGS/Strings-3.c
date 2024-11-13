// C program to find the character whuch has appeared only once

#include <stdio.h>
#include <string.h>

char firstNonRepeatingCharacter(char str[]) {
    int charCount[256] = {0}; // Array to store the count of each character

    // Iterate through the string and count the occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        charCount[(unsigned char)str[i]]++;
    }

    // Iterate through the string again and find the first character with count 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (charCount[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    // If no non-repeating character is found, return a special character (e.g., '$')
    return '$';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char result = firstNonRepeatingCharacter(str);

    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
