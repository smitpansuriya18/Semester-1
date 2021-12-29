#include <stdio.h>
int sum(int,int);
void main()


{
	int no1,no2,add;

	printf("Enter number 1:");
    scanf("%d",&no1);
    printf("Enter number 2:");
    scanf("%d",&no2);

    sum(no1,no2);
}   
    int sum(int no1,int no2)

   {
    int add;   

    add=no1+no2;

    printf("addition=%d",add);
   }
