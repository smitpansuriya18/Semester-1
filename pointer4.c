#include <stdio.h>
void main()
{
	int a[5],i,b=0;
	int *p=a;

	for ( i = 0; i < 5; ++i)
	{
		printf("no=%d\n",i+1);
		scanf("%d",(p+i));
	}

	for (i = 0; i < 5; ++i)
	{
		b=b+*(p+i);
	}
	printf("sum=%d\n",b);
}