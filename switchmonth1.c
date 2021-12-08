#include<stdio.h>
void main()
{
	int month;

	printf("enter month no=");
	scanf("%d",&month);

	switch(month)
	{
		case 1 :
		printf("no of days=31");
		break ;

		case 2 :
		printf("no of days=28");
		break ;

		case 3 :
		printf("no of days=31");
		break ;

		case 4  :
		printf("no of days=30");
		break ;

		case 5 :
		printf("no of days=31");
		break ;

		case 6 :
		printf("no of days=30");
		break ;

		case 7 :
		printf("no of days=31");
		break ;

		case 8 :
		printf("no of days=31");
		break ;

		case 9 :
		printf("no of days=30");
		break ;

		case 10 :
		printf("no of days=31");
		break ;

		case 11 :
		printf("no of days=30");
		break ;

		case 12 :
		printf("no of days=31");
		break ;

		default :
		printf("Please enter valid number");
	}
}