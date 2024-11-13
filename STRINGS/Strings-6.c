// C program to sort a array os atrings without using qsort()function.

#include <stdio.h>
#include <string.h>

// Function to sort an array of strings
void sortStrings(char arr[][100], int n) {
    char temp[100];

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                // Swap the strings if they are in the wrong order
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

// Function to print an array of strings
void printStrings(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char arr[100][100];
    int n;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter names:\n");
    for (int i = 0; i < n; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = 0; 
    }

    sortStrings(arr, n);

    printf("\nSorted names:\n");
    printStrings(arr, n);

    return 0;
}
