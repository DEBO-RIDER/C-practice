//C program to append content of one text file to another

#include <stdio.h>
#include <stdlib.h>

void appendFiles(const char *sourceFile, const char *targetFile) {
    FILE *source, *target;
    char ch;

    // Open the source file for reading
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        perror("Error opening source file");
        exit(1);
    }

    // Open the target file for appending
    target = fopen(targetFile, "a");
    if (target == NULL) {
        perror("Error opening target file");
        fclose(source);
        exit(1);
    }

    // Read from source and append to target
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    // Close both files
    fclose(source);
    fclose(target);

    printf("Content appended successfully.\n");
}

int main() {
    const char *sourceFile = "source.txt";
    const char *targetFile = "target.txt";

    appendFiles(sourceFile, targetFile);

    return 0;
}
