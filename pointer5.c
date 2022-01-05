#include <stdio.h>
void main()
{
	int a[5],i,temp=0,j;
	int *p=a;

	for (int i = 0; i < 5; ++i)
	{
		printf("no=%d\n",i+1);
		scanf("%d",(p+i));
	}

	for ( i = 0; i < 5; ++i)
	{
		for ( j = i+1; j < 5; ++j)
		{
			if (*(p+j)<*(p+i))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}

	for(i=0;i<5;i++)
	{
	printf("temp=%d",*(p+i));
	}
}