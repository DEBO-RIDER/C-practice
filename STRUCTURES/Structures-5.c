// Flexible array members in C

#include <stdio.h>
#include <stdlib.h>

// Structure with a Flexible Array Member
struct FlexibleArray {
    int size;
    int array[]; // Flexible Array Member
};

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the structure plus the array
    struct FlexibleArray *fArray = malloc(sizeof(struct FlexibleArray) + n * sizeof(int));
    fArray->size = n;

    // Initialize the array elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &fArray->array[i]);
    }

    // Print the array elements
    printf("The elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fArray->array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(fArray);

    return 0;
}
