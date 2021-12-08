#include<stdio.h>
void main()
{
	int x,hr,min,sec;

	printf("enter sec=");
	scanf("%d",&sec);

	hr=sec/3600;

	x=sec%3600;
	min=x/60;
	sec=x%60;

	printf("%d:%d:%d",hr,min,sec);
}
