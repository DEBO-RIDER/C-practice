//C Program to Calculate Sum of Natural Numbers using loop , mathematics formula. and recursion .


// using loop 

#include <stdio.h>

int main() {
    int N , sum = 0;
    printf("enter the total number :");
    scanf("%d",&N);
    for (int i = 0; i < N; i++) {
      sum += i+1;  
    }
    printf("the total sum is %d",sum);
    return 0;
}



// using formula of sum of natural numbers 
#include <stdio.h>

int main() {
    int N , sum ;
    printf("enter the total number :");
    scanf("%d",&N);
    sum = (N * (N+1))/2;
    printf("the total sum is %d",sum);
    
    return 0;
}

//using recursion 
#include <stdio.h>

int sumofnaturalnumbers(int num)
{
	if (num != 0)
	
		// adding natural numbers up to given number n
		return num + sumofnaturalnumbers(num - 1);
	else
		return num;
}

int main()
{

	int number = 10;

	// printing the result
	printf("Sum = %d", sumofnaturalnumbers(number));

	return 0;
}
