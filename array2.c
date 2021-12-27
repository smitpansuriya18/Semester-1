#include <stdio.h>
void main()
{
	int i,n,odd=0,even=0;

	printf("enter n=\n");
	scanf("%d",&n);

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		printf("enter no=\n");
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			even++ ;
		}
		
		else
		{
			odd++ ;
		}

	}
	printf("odd no=%d",odd);
	printf("even no=%d",even);
	
}