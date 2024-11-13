//Add Matrix in C
#include <stdio.h>

// Function to add two 3x3 matrices
void AdditionMatrix(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int matrix[3][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result[3][3];  // To store the result of matrix addition

    printf("Matrix 1:\n");
    printMatrix(matrix1, 3, 3);

    printf("Matrix 2:\n");
    printMatrix(matrix2, 3, 3);

    // Add the matrices
    AdditionMatrix(matrix1, matrix2, result);

    printf("Resultant Matrix after Addition:\n");
    printMatrix(result, 3, 3);

    return 0;
}
