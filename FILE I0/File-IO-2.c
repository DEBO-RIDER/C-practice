//Read/Write Structure From/to a File in C
#include <stdio.h>
#include <stdlib.h>

// Define the Person structure
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

void writeToFile(const char *filename, Person *people, size_t count) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Failed to open file");
        exit(1);
    }

    fwrite(people, sizeof(Person), count, file);
    fclose(file);
}

int main() {
    Person people[3] = {
        {"Alice", 30, 5.5},
        {"Bob", 25, 5.8},
        {"Charlie", 35, 6.0}
    };

    writeToFile("people.dat", people, 3);

    return 0;
}
