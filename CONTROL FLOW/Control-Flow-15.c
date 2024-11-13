//C Program to Display Prime Numbers Between Intervals

#include <stdio.h>

int main()
{
	int a, b,flag;
	printf("Enter the interval: \n");
	scanf("%d%d",&a,&b); 

	printf("Prime numbers between %d and %d are: \n", a, b);
	for (int i = a; i <= b; i++) 
	{
		if (i == 1 || i == 0)
			continue;
		flag = 1;

		for (int j = 2; j <= i / 2; ++j) 
		{
			if (i % j == 0) 
			{
				flag = 0;
				break;
			}else{
                flag = 1;
            }
		}
		if (flag == 1)
			printf("%d ", i);
	}printf("\n");

	return 0;
}
