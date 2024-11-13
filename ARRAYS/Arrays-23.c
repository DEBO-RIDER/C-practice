// C program to rotate elements of a matrix 

#include <stdio.h>

// Function to rotate the matrix by 90 degrees clockwise
void rotateMatrix(int matrix[4][4], int n) {
    for (int x = 0; x < n / 2; x++) {
        for (int y = x; y < n - x - 1; y++) {
            // Store current cell in temp variable
            int temp = matrix[x][y];

            // Move values from right to top
            matrix[x][y] = matrix[n - 1 - y][x];

            // Move values from bottom to right
            matrix[n - 1 - y][x] = matrix[n - 1 - x][n - 1 - y];

            // Move values from left to bottom
            matrix[n - 1 - x][n - 1 - y] = matrix[y][n - 1 - x];

            // Assign temp to left
            matrix[y][n - 1 - x] = temp;
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[4][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix, n);

    rotateMatrix(matrix, n);

    printf("\nRotated Matrix by 90 degrees clockwise:\n");
    printMatrix(matrix, n);

    return 0;
}
