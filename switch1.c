#include<stdio.h>
void main()
{
	int a,b,ch;

	printf("enter a");
	scanf("%d",&a);

	printf("enter b");
	scanf("%d",&b);

	printf("1=add,\n 2=sub,\n 3=mul,\n4=div,\n");
	printf("enter basic choice=");
	scanf("%d",&ch);


	switch(ch)
	{
		case 1:
		printf("add=%d",a+b);
		break ;.2                                             
		case 2:
		printf("add=%d",a-b);
		break ;-

		case 3:
		printf("add=%d",a*b);
		break ;

		case 4:
		printf("add=%d",a/b);
		break ;

		defult :
		printf("please enter valid number");

	}

}