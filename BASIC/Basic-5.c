//Program for converting hours into minutes and seconds

#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

   
    printf("%d hours is equal to %d minutes and %d seconds.\n", hours, minutes, seconds);

    return 0;
}
