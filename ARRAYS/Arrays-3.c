// C Program For Maximum and Minimum of an Array
#include <stdio.h>
void MaxNumAndMinInArray(int arr[], int n) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum number in the array is %d\n", max);
    printf("The minimum number in the array is %d\n", min);
}

int main() {
    int arr[6] = {11, 23, 3, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxNumAndMinInArray(arr, n);

    return 0;
}
