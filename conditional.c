#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("enter 3 number");
	scanf("%d %d %d",&a,&b,&c);

	d=(a>b)?(a):(b);
	
	printf("number=%d",d*c);
}
