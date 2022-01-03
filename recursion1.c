#include<stdio.h>
int factorial(int n)
{
	if(n==1)
		return 1;

	else
	{
		return factorial(n-1)*n;
	}
}
void main()
	{
		int n;
		printf("enter n=");
		scanf("%d",&n);

		printf("factorial=%d",factorial(n));
	}