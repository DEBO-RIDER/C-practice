//C Program to Check Whether Two Matrices Are Equal or Not

#include <stdio.h>

void CheckMatrix(int matrixA[4][4], int matrixB[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrixA[i][j] == matrixB[i][j]) {
                printf("matrixA[%d][%d] and matrixB[%d][%d] are equal\n", i, j, i, j);
            } else {
                printf("matrixA[%d][%d] and matrixB[%d][%d] are not equal\n", i, j, i, j);
            }
        }
    }
}

int main() {
    int matrixA[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int matrixB[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    CheckMatrix(matrixA, matrixB);
    
    return 0;
}
