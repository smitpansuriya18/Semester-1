#include <stdio.h>
struct book
{
	char title[50];
	char name[50];
	char publication[50];
	int price;

}b1,b2;

void main()
{
	printf("enter book title=");
	scanf("%s",b1.title);

	printf("enter book's auther name=");
	scanf("%s",b1.name);

	printf("enter publication=");
	scanf("%s",b1.publication);

	printf("enter book price=");
	scanf("%d",&b1.price);

	printf("book title=%s\nbook's auther name=%s\npublication=%s\nprice=%d\n",b1.title,b1.name,b1.publication,b1.price);

}
