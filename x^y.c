#include <stdio.h>
void main()
{
	int x,y,i=1,a=1;

	printf("enter x and y");
	scanf("%d\n %d",&x,&y);

	while(i<=y)
	{
		a=a*x;
		i++;
	}

	printf("x^y=%d",a );
}