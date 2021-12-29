#include <stdio.h>
int sum();
void main()
{
    int x;
	x=sum();
    printf("addition=%d",x);
}

int sum()
{
	int no1,no2,add;

	printf("Enter number 1:");
    scanf("%d",&no1);
    printf("Enter number 2:");
    scanf("%d",&no2);

    add=no1+no2;

    return add;
}