// Reverse Number Program in C

#include <stdio.h>

int main() {
    int Number, RevNumber = 0;
    printf("Enter the number: ");
    scanf("%d", &Number); 

    while (Number != 0) {
        int remainder = Number % 10;  
        RevNumber = RevNumber * 10 + remainder;  
        Number /= 10;  
    }

    printf("The reversed number is %d\n", RevNumber);  
}
