//C Program to Concatenate Two Strings Without Using strcat

#include <stdio.h>
#include <string.h>

void ConcatenateStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Find the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Add a space after str1
    str1[i] = ' ';
    i++;

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the concatenated string
    str1[i] = '\0';
}

// Function to print a string
void PrintString(char str[]) {
    printf("%s\n", str);
}

int main() {
    char str1[200] = "debopam";
    char str2[100] = "sinha";

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    ConcatenateStrings(str1, str2);
    printf("Concatenated String: ");
    PrintString(str1);

    return 0;
}
