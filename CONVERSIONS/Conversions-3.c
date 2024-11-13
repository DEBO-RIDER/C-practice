//Converting String to Long in C and vice versa .

// string to long
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    char *endptr;
    long int num;

    printf("Enter a string representing a number: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    // Convert string to long
    num = strtol(str, &endptr, 10); // Base 10 conversion

    // Check for errors
    if (*endptr != '\0') {
        printf("Conversion error, non-convertible part: %s\n", endptr);
    } else {
        printf("The converted long integer is: %ld\n", num);
    }

    return 0;
}


// long to string
#include <stdio.h>

int main() {
    long num = -123456;
    char str[50];

    // Convert long to string using sprintf
    sprintf(str, "%ld", num); // %ld is the format specifier for long integers

    printf("The string representation of the long integer is: %s\n", str);

    return 0;
}
