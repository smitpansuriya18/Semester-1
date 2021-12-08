#include<stdio.h>
void main()
{
	float d,u,t,a;
	printf("enter the value of u");
	scanf("%f",&u);
	printf("enter the value of t");
	scanf("%f",&t);
	printf("enter the value of a");
	scanf("%f",&a);
	d=((u*t)+((a*t)*(a*t)));
	printf("the value of d=%f",d);
	
}