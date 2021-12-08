#include <stdio.h>
void main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);

	printf("enter b");
	scanf("%d",&b);

	printf("enter c");
	scanf("%d",&c);

	if(a==b && b==c)
	{
		printf("Triangle is equlateral");
	}

	else if(a==b && a!=c || a==c && a!=b || b==c && b!=a )
	{
		printf("Triangle is isoscalar");
	}
	else if (((a*a)+(b*b)==(c*c)) || ((a*a)+(c*c)==(b*b)) || ((c*c)+(b*b)==(a*a)))
	{
		printf("Triangle is right angel Triangle");
	}
	else
	{
		printf("Triangle is scalar");
	}

}
                     