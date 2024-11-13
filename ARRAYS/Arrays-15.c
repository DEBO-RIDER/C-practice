// C program to sort an 2d array by rows.

#include <stdio.h>

// Function to perform bubble sort in ascending order on each row of a 2D array
void bubbleSortAscending2D(int arr[][4], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns - 1; j++) {
            for (int k = 0; k < columns - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    // Swap arr[i][k] and arr[i][k + 1]
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}

// Function to print a 2D array
void printArray(int arr[][4], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // To format the 2D array properly
    }
}

int main() {
    int rows = 4;
    int columns = 4;
    int arr[4][4] = {
        {8, 5, 7, 2},
        {7, 3, 0, 1},
        {8, 5, 3, 2},
        {9, 4, 2, 1}
    };

    printf("Unsorted array: \n");
    printArray(arr, rows, columns);
    bubbleSortAscending2D(arr, rows, columns);
    printf("Sorted array in ascending order: \n");
    printArray(arr, rows, columns);

    return 0;
}
