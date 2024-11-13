//C Program to Find Common Array Elements Between Two Arrays

#include <stdio.h>

void CopyElements(int arr1[], int arr2[], int n1, int n2) {
    int commonElements[n1 < n2 ? n1 : n2]; 
    int common = 0; 

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                commonElements[common++] = arr1[i];
                break; // Move to the next element in arr1
            }
        }
    }

    // Print common elements
    printf("Common elements: ");
    for (int i = 0; i < common; i++) {
        printf("%d ", commonElements[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 7, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    CopyElements(arr1, arr2, n1, n2);

    return 0;
}
