// C-program to remove duplicate items from array

#include <stdio.h>


int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    
    int j = 0;

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];

    return j;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

   
    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates: \n");
    printArray(arr, n);

    return 0;
}
