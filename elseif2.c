#include<stdio.h>
void main()
{
	int no1,no2,x;

	printf("enter no1");
	scanf("%d",&no1);

	printf("enter no2");
	scanf("%d",&no2);

	printf("1=add,\n 2=sub,\n 3=mul,\n4=div,\n");
	printf("enter basic choice=");
	scanf("%d",&x);

	if(x==1)
	{
		printf("no1+no2=%d",no1+no2);
	}

	else if(x==2)
	{
		printf("no1-no2=%d",no1-no2);
	}

	else if(x==3)
	{
		printf("no1*no2=%d",no1*no2);
	}

	else if(x==4)
	{
		printf("no1/no2=%d",no1/no2);
	}

	else
	{
		printf("enter choice between 1,2,3,4");
	}


}