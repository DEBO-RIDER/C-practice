//C Program to Print Pyramid Pattern

//1.Half Pyramid Pattern of Numbers

#include <stdio.h>

int main()
{
	int rows;
	printf("Number of rows: ");
	scanf("%d", &rows);
	for (int i = 1; i <= rows; i++) {

		for (int j = 1; j <= i; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

//2.Inverted Half Pyramid of Numbers

#include <stdio.h>

int main()
{
	int rows;
	printf("Number of rows: ");
	scanf("%d", &rows);
	for (int i = rows; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}

//3. Full Pyramid Pattern of Numbers

#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf("  ");
        }
        // Print numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}

//4. Full Pyramid of Numbers  in 180 Degree

#include <stdio.h> 
int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
    
    // Ascending part of the pyramid
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    // Descending part of the pyramid
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

//5. hollow pyramid of ” * ” & Numbers

#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i == rows || j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//6. Diamond Pyramid of ” * ” & Numbers


#include <stdio.h>

int main() {
    int rows;
    printf("Number of rows (half of the diamond): ");
    scanf("%d", &rows);

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
