//Sorting a dynamic 2-dimensional array of Strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void bubbleSort(char **arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); 


    char **arr = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        arr[i] = (char *)malloc(100 * sizeof(char)); // Allocate memory for each string
    }

    // Input the strings
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0'; 
    }

   
    bubbleSort(arr, n);

 
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

  
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
