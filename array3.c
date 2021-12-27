#include <stdio.h>
void main()
{
	int n,i,j,sum=0,avg=0,x,y;

	printf("enter n=\n");
	scanf("%d",&n);

	int a[n];

	for (int i = 0; i < n; ++i)
	{
		printf("enter no=");
		scanf("%d",&a[i]);
		{
			sum=sum+a[i];
			avg=(sum/a[i]);
		}
		

		x=a[0];
		y=a[0];

		{
			for (int j = 0; j < n; j++)
			{
				if(a[j]>x)
				{
					x=a[j];
				}
				if (a[j]<y)
				{
					 y=a[j];
				}
			}
		}			
		
	}

	printf("sum=%d",sum);
	printf("avg=%d",avg);
	printf("max=%d",x);
	printf("min=%d",y);



}
