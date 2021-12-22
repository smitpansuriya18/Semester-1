#include <stdio.h>
#include<math.h>
void main()
{
	int i,x,j,sum=0,m,n;

	printf("enter x=\n");
	scanf("%f",&x);

	printf("enter n=\n");
	scanf("%f",&n);


	for(i=1,i<=n,i++)
	{
		for (j=1;m=1;j<=i;j++)
		{
			m=m*j;
		}
			if (j%2==0)
			{
				 sum=sum+(pow(x,i)/m);
				 printf("%f",sum);
			}			
			else
			{
				sum=sum-(pow(x,i)/m);
				printf("%f",sum);
			}
		}	
	printf("%f",sum);
}
