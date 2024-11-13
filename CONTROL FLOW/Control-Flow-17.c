//C Program to Display Factors of a Number

#include <stdio.h>

int main() {
    int N;
    printf("Enter your number: ");
    scanf("%d", &N);
    printf("The Factors of %d are: ", N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
