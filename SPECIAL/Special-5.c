//Naive algorithm for Pattern Searching

#include <stdio.h>
#include <string.h>

// Function to perform naive pattern searching
void naivePatternSearch(char *text, char *pattern) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    // Loop through the text
    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;

        // For current index i, check for pattern match
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        // If pattern is found, print the starting index
        if (j == patternLength) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char text[] = "AABAACAADAABAAABAA";
    char pattern[] = "AABA";

    naivePatternSearch(text, pattern);

    return 0;
}
