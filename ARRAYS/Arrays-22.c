//C Program to Print Boundary Elements of a Matrix

#include <stdio.h>

// Function to print boundary elements of a matrix
void printBoundaryElements(int matrix[][4], int rows, int columns) {
    // Create an array to store boundary elements in matrix shape
    int boundary[4][4] = {0}; 

    // Fill the boundary array with boundary elements
    for (int i = 0; i < columns; i++) {
        boundary[0][i] = matrix[0][i]; // Top row
        boundary[rows-1][i] = matrix[rows-1][i]; // Bottom row
    }
    for (int i = 1; i < rows - 1; i++) {
        boundary[i][0] = matrix[i][0]; // Left column
        boundary[i][columns-1] = matrix[i][columns-1]; // Right column
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (boundary[i][j] != 0)
                printf("%d ", boundary[i][j]);
            else
                printf("  "); // Print space for non-boundary elements
        }
        printf("\n");
    }
}

int main() {
    int rows = 4;
    int columns = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nBoundary elements of the matrix:\n");
    printBoundaryElements(matrix, rows, columns);

    return 0;
}

