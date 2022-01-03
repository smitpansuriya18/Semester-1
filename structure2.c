#include <stdio.h>
struct person
{
	char name[50];
	char date_of_joining[50];	
	int salary;

}p[5];

void main()
{
	int i;

	for (int i = 0; i < 5; ++i)
	{
		printf("enter name=");
		scanf("%s",p[i].name);

		printf("enter date of joining=");
		scanf("%s",p[i].date_of_joining);

		printf("enter salary=");
		scanf("%d",&p[i].salary);

		printf("\nname=%s\ndate_of_joining=%s\nsalary=%d",p[i].name,p[i].date_of_joining,p[i].salary);
	}
}