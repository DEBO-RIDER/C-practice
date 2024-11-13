// Program to Convert Fahrenheit to Celsius in C.

#include <stdio.h>

int main() {
    int Fahrenheit;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &Fahrenheit);
    float Temp = (5.0/9.0) * (Fahrenheit - 32);
    printf("The temperature converted is %.2f\n", Temp);
    return 0;
}
