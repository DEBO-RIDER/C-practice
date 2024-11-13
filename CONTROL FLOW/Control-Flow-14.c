//Palindrome Number Program in C

#include <stdio.h>

int main() {
    int Number, OriginalNumber, RevNumber = 0;
    printf("Enter the number: ");
    scanf("%d", &Number); 

    OriginalNumber = Number; 

    while (Number != 0) {
        int remainder = Number % 10;  
        RevNumber = RevNumber * 10 + remainder;  
        Number /= 10;  
    }

    if (RevNumber == OriginalNumber) {  
        printf("The number is a palindrome\n");
    } 
    else {
        printf("The number is not a palindrome\n");
    }

    return 0;
}

