// C program to check if a string is pangram or not.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a pangram
bool isPangram(char str[]) {
    bool alphabet[26] = {false};
    int index;

    // Convert all characters to lowercase and mark the alphabet index
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            index = tolower(str[i]) - 'a';
            alphabet[index] = true;
        }
    }

    // Check if all alphabets are marked
    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    if (isPangram(str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
