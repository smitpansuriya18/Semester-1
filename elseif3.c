#include<stdio.h>
void main()
{
	int a,b;

	printf("enter number");
	scanf("%d",&a);

	b=a%10;

	if (b%2==0)
	{
		printf("given number is even");
	}

	else
	{
		printf("given number is odd");
	}


}