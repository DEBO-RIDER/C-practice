//C Program to Determine the Unicode Code Point at a Given Index

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void printUnicodeCodePoint(const wchar_t *str, int index) {
    if (index < 0 || index >= wcslen(str)) {
        printf("Index out of range.\n");
        return;
    }

    // Get the character at the given index
    wchar_t ch = str[index];

    // Print the Unicode code point of the character
    printf("The Unicode code point at index %d is: U+%04X\n", index, ch);
}

int main() {
    // Set the locale to the user's default locale
    setlocale(LC_ALL, "");

    wchar_t str[100];
    
    // Get input from the user
    wprintf(L"Enter a wide-character string: ");
    fgetws(str, 100, stdin);

    // Remove trailing newline character
    str[wcslen(str) - 1] = L'\0';

    int index;
    printf("Enter the index: ");
    scanf("%d", &index);

    // Print the Unicode code point at the given index
    printUnicodeCodePoint(str, index);

    return 0;
}
