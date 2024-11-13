//C Program for Quadratic Equation Roots

#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 

// Prints roots of quadratic 
// equation ax*2 + bx + x 
void findRoots(int a, int b, int c) 
{ 
	// If a is 0, then equation is 
	// not quadratic, but linear 
	if (a == 0) { 
		printf("Invalid"); 
		return; 
	} 

	int d = b * b - 4 * a * c; 
	double sqrt_val = sqrt(abs(d)); 

	if (d > 0) { 
		printf("Roots are real and different\n"); 
		printf("%.2f\n%.2f", (double)(-b + sqrt_val) / (2 * a), 
			(double)(-b - sqrt_val) / (2 * a)); 
	} 
	else if (d == 0) { 
		printf("Roots are real and same\n"); 
		printf("%.2f", -(double)b / (2 * a)); 
	} 
	else // d < 0 
	{ 
		printf("Roots are complex\n"); 
		printf("%f + i%.2f\n%.2f - i%.2f", -(double)b / (2 * a), 
			sqrt_val / (2 * a), -(double)b / (2 * a), 
			sqrt_val / (2 * a)); 
	} 
} 

// Driver code 
int main() 
{ 
	int a = 1, b = -7, c = 12; 

	// Function call 
    printf("your roots of equation : %dx^2 + %dx + %d are = \n",a,b,c);
	findRoots(a, b, c); 
	return 0; 
}
