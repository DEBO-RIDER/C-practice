// C program to perform binary search 

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Find the middle element
        
        // Check if the key is present at mid
        if (arr[mid] == key)
            return mid;
        
        // If key is greater, ignore the left half
        if (arr[mid] < key)
            left = mid + 1;
        
        // If key is smaller, ignore the right half
        else
            right = mid - 1;
    }
    
    // Key not found
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int result = binarySearch(arr, n, key);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in array\n");
    
    return 0;
}
