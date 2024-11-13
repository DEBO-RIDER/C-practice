// C program to demonstrate the Multiplication table of a number using 2D arrays 

#include <stdio.h>
void print_table(int range, int num)
{
	// Taking two integer variables row and column
	int row, col;

	// Initializing row with range of the multiplication
	// table.
	row = range;

	// Initializing column with 3.
	col = 3;

	
	int arr[row][col];

	// For loop to calculate the table
	for (int k = 0; k < row; k++) {
		// Storing the number in the first column.
		arr[k][0] = num;

		// Storing the value to be multiplied in the second
		// column.
		arr[k][1] = k + 1;

		// Calculating and Storing the product in the third
		// column.
		arr[k][2] = arr[k][1] * arr[k][0];
	}

	// For loop to print the Multiplication table
	for (int i = 0; i < row; i++) {
		printf("%d * %d = %d", arr[i][0], arr[i][1],
			arr[i][2]);
		printf("\n");
	}
}
// Driver code
int main()
{
	// The range of the
	// Multiplication table.
	int range = 10;

	// The number to calculate the
	// Multiplication table.
	int num = 5;

	// Calling the Function.
	print_table(range, num);
	return 0;
}
