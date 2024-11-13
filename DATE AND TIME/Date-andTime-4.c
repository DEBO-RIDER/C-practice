// C program to demonstrate current date method

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tmp = localtime(&t);
    char MY_TIME[50];

    strftime(MY_TIME, sizeof(MY_TIME), "%d/%m/%Y", tmp);
    printf("System's current date: %s\n", MY_TIME);

    return 0;
}
