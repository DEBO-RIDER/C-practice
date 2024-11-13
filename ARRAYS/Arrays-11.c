//C Program to Remove All Occurrences of an Element in an Array
#include <stdio.h>
int removeElement(int arr[], int length, int value) {
    int j = 0; // Index to keep track of the new array's length
    for (int i = 0; i < length; i++) {
        if (arr[i] != value) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 5, 1, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    int value = 1;

    printf("Original array:\n");
    printArray(arr, length);

    // Remove elements
    int newLength = removeElement(arr, length, value);

    printf("Array after removing %d:\n", value);
    printArray(arr, newLength);

    return 0;
}
