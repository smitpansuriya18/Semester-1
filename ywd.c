#include<stdio.h>
void main()
{
	int year,week,day,x;

	printf("enter day=");
	scanf("%d",&day);

	year=day/365;
	x= day%365;
	week=x/7;
	day=x%7;

	printf("year=%d week=%d day=%d",year,week,day);
}