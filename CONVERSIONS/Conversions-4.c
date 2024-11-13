//C Program For Int to Char Conversion and vice versa.

// int to char
#include <stdio.h>
int main()
{
	int N = 103;
	printf("%c", (char)(N));
	return 0;
}

// char to int 

#include <stdio.h>
#include <stdlib.h>
int main() {
    char ch = '5';

    // atoi() to convert it to an integer
    int N = atoi(&ch);
    printf("The integer value of character '%c' is %d\n", ch, N);

    return 0;
}
