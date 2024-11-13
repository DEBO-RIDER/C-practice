//C program to Compare Two Strings without using strcmp() function (lexicographic method)

#include <stdio.h>

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Loop through each character of both strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            // If characters are different, return the difference
            return str1[i] - str2[i];
        }
        i++;
    }

    // If end of one string is reached, return the difference in lengths
    return str1[i] - str2[i];
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

