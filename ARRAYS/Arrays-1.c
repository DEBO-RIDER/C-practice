// pass a 2D array as a parameter in C

//normal method
#include <stdio.h>

void printArray(int arr[3][3], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m = 3, n = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printArray(arr, m, n);

    return 0;
}

//using pointer 

#include <stdio.h>

void printArray(int *arr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(arr + i * n + j));
        }
        printf("\n");
    }
}

int main() {
    int m = 3, n = 3;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printArray((int *)arr, m, n);

    return 0;
}
