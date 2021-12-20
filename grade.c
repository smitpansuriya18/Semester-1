#include<stdio.h>
void main()
{

	float a,b,c,d,z,x,e;

	printf("enter value of a");
	scanf("%f",&a);

	printf("enter value of b");
	scanf("%f",&b);

	printf("enter value of c");
	scanf("%f",&c);

	printf("enter value of e");
	scanf("%f",&e);
	
	z=(a+b+c+d+e)/5;

	if(z<35)
	{
		printf("fail");
	}
	else if(x>=35 && x<=45)
	{
		printf("pass class");
	}
	else if(x>45 && x<=60)
	{
		printf("second class");
	}
	else if(x>60 && x<=70)
	{
		printf("first class");
	}
	else
	{
		printf("Distriction");
	}


}