//C Program to Maximize Time by Replacing ‘_’ in a Given 24-Hour Format Time

#include <stdio.h>
#include <string.h>

void maximizeTime(char time[]) {
    // Replace '_' in the hours' tens place
    if (time[0] == '_') {
        if (time[1] == '_' || time[1] < '4') {
            time[0] = '2';
        } else {
            time[0] = '1';
        }
    }

    // Replace '_' in the hours' units place
    if (time[1] == '_') {
        if (time[0] == '2') {
            time[1] = '3';
        } else {
            time[1] = '9';
        }
    }

    // Replace '_' in the minutes' tens place
    if (time[3] == '_') {
        time[3] = '5';
    }

    // Replace '_' in the minutes' units place
    if (time[4] == '_') {
        time[4] = '9';
    }
}

int main() {
    char time[6];
    
    // Input the time with underscores
    printf("Enter the time in HH:MM format with underscores: ");
    scanf("%s", time);
    
    // Ensure the string is in the correct format
    if (strlen(time) != 5 || time[2] != ':') {
        printf("Invalid time format.\n");
        return 1;
    }

    maximizeTime(time);

    printf("Maximized time: %s\n", time);

    return 0;
}
