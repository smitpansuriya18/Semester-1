#include<stdio.h>
void main()
{
	int no;
	printf("enter no");
	scanf("%d",&no);

	if(no%2==0)
	{
		printf("given no is even");
	}
	if(no%2!=0)
	{
		printf("given no is odd");
	}
}