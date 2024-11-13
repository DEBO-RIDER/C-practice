//How to return a Pointer from a Function in C

//static variables
#include <stdio.h>

int* ReturnPtr() {
    static int A = 10; // Static variable
    return &A;
}

int main() {
    int* p = ReturnPtr(); 
    printf("%p\n", p); 
    printf("%d\n", *p); 
    return 0;
}


//Dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int* ReturnPtr() {
    int* A = (int*)malloc(sizeof(int)); 
    *A = 10;
    return A;
}

int main() {
    int* p = ReturnPtr(); 
    printf("%p\n", p); 
    printf("%d\n", *p); 
    free(p); 
    return 0;
}

