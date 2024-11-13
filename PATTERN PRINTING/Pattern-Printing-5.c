//C Program To Print Hollow Diamond Pattern

#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows (half of the diamond): ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
