#include<stdio.h>
void main()
{
	int no;

	printf("enter no");
	scanf("%d",&no);

	if(no>=0)
	{
		printf("given no is positive");

	}
	if(no<0)
	{
		printf("given no is nagetive");
	}	
	if(no==0)
	{
		printf("given no is zero");
	}	
}