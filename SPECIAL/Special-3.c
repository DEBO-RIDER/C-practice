// C Program to check if a number is a palindrome by converting it to a string and using two pointers
#include <stdio.h>
#include <string.h>

int isPalindrome(int n) {
    char str[20];
  
      // Convert the number to a string
    sprintf(str, "%d", n);

      // Left pointer starting from the first character
    int left = 0;   
  
      // Right pointer starting from the last character
    int right = strlen(str) - 1;

    // Loop until the pointers meet in the middle
    while (left < right) {
      
        // If mismatch is found (not a palindrome)
        if (str[left] != str[right]) {
            return 0;
        }
          
          // Move pointers towards each other
        left++;
        right--;
    }

    return 1;
}

int main() {
    int num = 1221;

    // Check if the number is a palindrome and print the result
    if (isPalindrome(num)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
