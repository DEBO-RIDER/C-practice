//C-program to readonly a file 

#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char ch;

    // Open the file in read-only mode
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read and print the file's contents
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
