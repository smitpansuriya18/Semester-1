#include<stdio.h>
void main()
{
	int x;

	
	printf("1=mon\n 2=tue\n 2=wed\n 4=thu\n 5=fri\n 6=sat\n 7=sun\n");
	printf("enter number");
	scanf("%d",&x);
	

	switch(x)
	{

	case 1:
	printf("monday");
	break;

	case 2:
	printf("tuesday");
	break;

	case 3:
	printf("wednesday");
	break;

	case 4:
	printf("thursday");
	break;

	case 5:
	printf("friday");
	break;

	case 6:
	printf("satursday");
	break;

	case 7:
	printf("sunday");
	break;

	defult:
	printf("please enter number 1to 7");
	}

}