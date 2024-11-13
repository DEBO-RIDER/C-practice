// C Program to Display Armstrong numbers between given range 

#include <math.h>
#include <stdio.h>

int main()
{
	int i, sum, num, count = 0;
    int minRange ,maxRange;
    printf("enter the range between the armstrong no you want to calculate :\n");
    scanf("%d%d",&minRange,&maxRange);
    printf("All Armstrong number between %d and %d are:\n",minRange,maxRange);

	for (i = minRange; i <= maxRange; i++) {
		num = i;
		// Count number of digits.
		while (num != 0) {
			num /= 10;
			count++;
		}
		num = i;
		sum = pow(num % 10, count)
			+ pow((num % 100 - num % 10) / 10, count)
			+ pow((num % 1000 - num % 100) / 100, count);
		// Check for Armstrong Number
		if (sum == i) {
			printf("%d ", i);
		}
		count = 0;
	}printf("\n");
    
}
