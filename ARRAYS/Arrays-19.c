//C Program To Find Normal and Trace of Matrix
#include <stdio.h>
#include <math.h>

// Function to calculate the  normal of a matrix
double MatrixNorm(int matrix[][3], int rows, int columns) {
    double sum = 0.0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += matrix[i][j] * matrix[i][j];
        }
    }
    return sqrt(sum);
}

// Function to calculate the trace of a matrix
int AdditionMatrix(int matrix[][3], int size) {
    int trace = 0;
    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

// Function to print a matrix
void printMatrix(int matrix[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matrix:\n");
    printMatrix(matrix, 3, 3);

    double norm = MatrixNorm(matrix, 3, 3);
    int trace = AdditionMatrix(matrix, 3);

    printf("\nNormal of the matrix: %.2f\n", norm);
    printf("Trace of the matrix: %d\n", trace);

    return 0;
}
