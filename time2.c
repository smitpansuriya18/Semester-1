#include<stdio.h>
void main()
{
	int x,day,week,year;

	printf("enter no of day=");
	scanf("%d",&day);

	year=day/365;

	x=day%365;
	week=x/7;
	day=x%7;

	printf("%d:%d:%d",year,week,day);
}
