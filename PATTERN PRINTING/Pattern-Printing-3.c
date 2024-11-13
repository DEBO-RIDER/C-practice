//C Program To Print Character Pyramid Pattern

#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + (i - 1));  // Print the character corresponding to the current row
        }
        printf("\n");
    }

    return 0;
}
