#include <stdio.h>
void main()
{
	char ch;

	printf("enter character");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
		printf("small later");
	}

	else if (ch>='A' && ch<='Z')
	{
		printf("capital later");
	}
	else if (ch>='0' && ch<='9')
	{
		printf("Digit");
	}

	else
	{
		printf("special Character");
	}

}