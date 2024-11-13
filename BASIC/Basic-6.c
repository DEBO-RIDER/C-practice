// C program to find quotient and remainder of two numbers
#include <stdio.h>

int main()
{
	int A, B, quotient = 0, remainder = 0;
    printf("Enter two numbers A and B : \n");
	scanf("%d%d", &A, &B);

	
	quotient = A / B;

	
	remainder = A % B;

	
	printf("Quotient when A/B is: %d\n", quotient);
	printf("Remainder when A/B is: %d", remainder);

	return 0;
}
