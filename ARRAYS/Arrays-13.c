//C Program to Copy All the Elements of One Array to Another Array

#include <stdio.h>

void CopyElements(int arr1[], int n1) {
    int copyElements[5]; 
    int copy = 0;
    
    // Copy elements from arr1 to copyElements
    for (int i = 0; i < n1; i++) {
        copyElements[copy++] = arr1[i];
    }

    // Print the copied array
    printf("Copied array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", copyElements[i]);
    }
    printf("\n");
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Array 1: ");
    printArray(arr1, n1);

    CopyElements(arr1, n1);

    return 0;
}
