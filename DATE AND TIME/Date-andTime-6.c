//gmtime() Function in C

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *gmt;

    // Get the current calendar time
    time(&t);

    // Convert the calendar time to UTC
    gmt = gmtime(&t);

    // Print the time in UTC
    printf("Current UTC time and date: %02d-%02d-%04d %02d:%02d:%02d\n",
           gmt->tm_mday,
           gmt->tm_mon + 1,
           gmt->tm_year + 1900,
           gmt->tm_hour,
           gmt->tm_min,
           gmt->tm_sec);

    return 0;
}
