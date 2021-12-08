#include <stdio.h>
void main()
{
	int no,i=1;

	printf("enter no=");
	scanf("%d",&no); 

	while(i<=no)
	{

		if(no%i==0)
		{
			printf("factor=%d\n",i);
		}
		i++;
	}
}


