// C Program to Read and Print All Files From a Zip File

#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

void print_zip_contents(const char *zip_filename) {
    int err = 0;
    // Open the ZIP archive
    zip_t *zip = zip_open(zip_filename, ZIP_RDONLY, &err);
    if (zip == NULL) {
        printf("Failed to open ZIP file: %s\n", zip_filename);
        return;
    }

    // Get the number of entries in the ZIP archive
    zip_int64_t num_entries = zip_get_num_entries(zip, 0);

    // Iterate over each entry in the ZIP archive
    for (zip_uint64_t i = 0; i < num_entries; i++) {
        const char *filename = zip_get_name(zip, i, 0);
        if (filename == NULL) {
            printf("Error reading filename from ZIP archive\n");
            continue;
        }
        printf("File: %s\n", filename);

        // Open the file inside the ZIP archive
        zip_file_t *file = zip_fopen_index(zip, i, 0);
        if (file == NULL) {
            printf("Error opening file %s in ZIP archive\n", filename);
            continue;
        }

        // Read the file contents and print them
        char buffer[4096];
        zip_int64_t bytes_read = 0;
        while ((bytes_read = zip_fread(file, buffer, sizeof(buffer))) > 0) {
            fwrite(buffer, 1, bytes_read, stdout);
        }
        printf("\n");

        // Close the file inside the ZIP archive
        zip_fclose(file);
    }

    // Close the ZIP archive
    zip_close(zip);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <zipfile>\n", argv[0]);
        return 1;
    }

    const char *zip_filename = argv[1];
    print_zip_contents(zip_filename);

    return 0;
}
