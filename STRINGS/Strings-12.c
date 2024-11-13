// C- program to split a string into sub-strings

#include <stdio.h>
#include <string.h>

// Function to split a string by a given delimiter
void splitString(char str[], const char delim[]) {
    char *token;

    // Get the first token
    token = strtok(str, delim);

    // Walk through other tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
}

int main() {
    char str[100];
    const char delim[] = " ,.-"; // Delimiters: space, comma, dot, hyphen

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    printf("Splitting the string into sub-strings:\n");
    splitString(str, delim);

    return 0;
}
