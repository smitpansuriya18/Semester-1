#include <stdio.h>
int sum();
void main()
{
	sum();
}

int sum()
{
	int no1,no2,add;

	printf("Enter number 1:");
    scanf("%d",&no1);
    printf("Enter number 2:");
    scanf("%d",&no2);

    add=no1+no2;
    printf("addition=%d",add);
}