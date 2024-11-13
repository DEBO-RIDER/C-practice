//C Program to Print Number Pattern

#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        
        // Print increasing part
        for (int j = 0; j < i; j++) {
            printf("%d", i + j);
        }
        
        // Print decreasing part
        for (int j = i - 2; j >= 0; j--) {
            printf("%d", i + j);
        }
        
        printf("\n");
    }
    
    return 0;
}
