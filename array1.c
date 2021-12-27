#include <stdio.h>
void main()
{
	int i,n,positive=0,nagetive=0,zero=0;

	printf("enter n=\n");
	scanf("%d",&n);

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		printf("enter no=\n");
		scanf("%d",&a[i]);
		if (a[i]>0)
		{
			positive++ ;
		}
		else if(a[i]<0)
		{
			nagetive++ ;
		}
		else
		{
			zero++ ;
		}

	}
	printf("positive no=%d",positive);
	printf("nagetive no=%d",nagetive);
	printf("zero no=%d",zero);
}