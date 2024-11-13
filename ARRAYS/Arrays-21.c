//Matrix Multiplication in C

#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int result[3][3], int row1, int col1, int row2, int col2) {
    // Initializing elements of matrix mult to 0.
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[3][3], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int secondMatrix[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3]; 

    printf("First Matrix:\n");
    printMatrix(firstMatrix, 3, 3);

    printf("Second Matrix:\n");
    printMatrix(secondMatrix, 3, 3);

    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, 3, 3, 3, 3);

    printf("Resultant Matrix after Multiplication:\n");
    printMatrix(result, 3, 3);

    return 0;
}
