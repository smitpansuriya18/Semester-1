#include<stdio.h>
void main()
{
	char ch;
	printf("enter value :\n");
	scanf("%c",&ch);
	printf("ascii value %d=%c",ch,ch);
	if (ch>=65 && ch<=122)
	{
		printf("given character is capital character\n");
	}
	else if (ch>=48 && ch<=57)
	{
		printf("given character is digit\n");
	}
	else
	{
		printf("given character is special character");
	}
}