//C Program to Find Largest Element in an Array

#include <stdio.h>

void MaxNumAndMinInArray(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The maximum number in the array is %d\n", max);
}

int main() {
    int arr[6] = {11, 23, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxNumAndMinInArray(arr, n);

    return 0;
}
