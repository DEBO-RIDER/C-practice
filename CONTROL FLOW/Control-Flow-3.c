//C Program to Check for Even or Odd Number Using Bitwise AND Operator and SHIFT operator.

//bitwise operator
#include <stdio.h>

void checkEvenOdd(int N) {
  
    // Check if the number is even or odd using bitwise
      // AND operator
    if (N & 1) {
        printf("Odd\n");
    }
    else {
        printf("Even\n");
    }
}

int main() {
    int N = 7;
      checkEvenOdd(N);
    return 0;
}
 // shift operator 

 #include <stdio.h>

void checkEvenOdd(int num) {
    int temp = num;
    temp = temp >> 1;
    temp = temp << 1;

    // Check if the number is even or odd using bitwise AND operator
    if (temp == num) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
}

int main() {
    int num = 8;
    checkEvenOdd(num);
    return 0;
}
