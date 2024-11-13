// C program to rotate an array 

#include <stdio.h>

// Function to rotate an array to the left by d positions
void leftRotate(int arr[], int d, int n) {
    // Temporary array to hold the elements to be rotated
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the array elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Place the elements from the temporary array at the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

// Function to rotate an array to the right by d positions
void rightRotate(int arr[], int d, int n) {
    // Temporary array to hold the elements to be rotated
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the rest of the array elements to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Place the elements from the temporary array at the beginning
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    printf("Original array: \n");
    printArray(arr, n);

    leftRotate(arr, d, n);
    printf("Array after left rotation by %d positions: \n", d);
    printArray(arr, n);

    rightRotate(arr, d, n);
    printf("Array after right rotation by %d positions: \n", d);
    printArray(arr, n);

    return 0;
}

