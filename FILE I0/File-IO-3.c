//C-program to rename a file 

#include <stdio.h>

int main() {
    const char *oldName = "oldfile.txt";
    const char *newName = "newfile.txt";

    // Create a sample file to rename
    FILE *file = fopen(oldName, "w");
    if (file == NULL) {
        perror("Error creating file");
        return 1;
    }
    fprintf(file, "This is a sample file.\n");
    fclose(file);

    // Rename the file
    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully from %s to %s.\n", oldName, newName);
    } else {
        perror("Error renaming file");
    }

    return 0;
}
