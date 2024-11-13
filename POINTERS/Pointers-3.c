// C program to find the largest number in array using pointers.

#include <stdio.h>


int findLargest(int *arr, int n) {
    int *ptr = arr; 
    int largest = *ptr; // Initialize largest with the first element

    for (int i = 1; i < n; i++) {
        ptr++; 
        if (*ptr > largest) {
            largest = *ptr; 
        }
    }

    return largest;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
