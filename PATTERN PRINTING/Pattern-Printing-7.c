//C-program to print reverse floyd pattern of numbers
#include <stdio.h>

int main() {
    int rows = 5;
    int num = rows * (rows + 1) / 2; // Calculate the maximum starting number

    for (int i = rows; i >= 1; i--) {
        int count = i;
        for (int j = 1; j <= count; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
