// C Program To Find Initials of a Name

#include <stdio.h>
#include <ctype.h>  // For toupper() function

void findInitials(char fullName[]) {
    int i = 0;
    
    // Print the first character if it's not a space
    if (fullName[i] != ' ') {
        printf("%c", toupper(fullName[i]));
    }

    // Traverse the full name
    while (fullName[i] != '\0') {
        // If there is a space, print the next character as an initial
        if (fullName[i] == ' ' && fullName[i + 1] != '\0' && fullName[i + 1] != ' ') {
            printf("%c", toupper(fullName[i + 1]));
        }
        i++;
    }

    printf("\n");
}

int main() {
    char fullName[100];
    
   
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    
   
    findInitials(fullName);
    
    return 0;
}
