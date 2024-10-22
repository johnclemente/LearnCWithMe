#include <stdio.h>

int fibonacci(int n)
{
	if (n<=1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main()
	{
	int storeNum;
	printf("please enter a number: ");
	scanf("%d",&storeNum);
	printf("the fibonacci number is: %d", fibonacci(storeNum));
	return 0;
	}
