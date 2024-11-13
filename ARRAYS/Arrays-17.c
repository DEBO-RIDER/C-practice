//Transpose of a Matrix in C

#include <stdio.h>

// Function to transpose a 4x4 matrix
void Transpose(int MatrixA[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            int temp = MatrixA[i][j];
            MatrixA[i][j] = MatrixA[j][i];
            MatrixA[j][i] = temp;
        }
    }
}

// Function to print a 4x4 matrix
void PrintMatrix(int matrixA[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n"); // New line for each row
    }
}

int main() {
    int matrixA[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Original Matrix:\n");
    PrintMatrix(matrixA);

    Transpose(matrixA);
    
    printf("\nTransposed Matrix:\n");
    PrintMatrix(matrixA);

    return 0;
}
