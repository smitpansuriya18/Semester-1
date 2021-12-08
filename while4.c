#include <stdio.h>
void main()
{
	int x,y,n;

	printf("enter the value of x=");
	scanf("%d",&x);

	printf("enter the value of y=");
	scanf("%d",&y);

	n=x;
	while(n<=y)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);
		}
		n++ ;
	}

}