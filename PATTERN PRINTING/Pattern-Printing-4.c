//C Program to Print Continuous Character Pattern(floyd pattern)
#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    
    char ch = 'A'; // Starting character
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}
