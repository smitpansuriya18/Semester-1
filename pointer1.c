#include <stdio.h>
void main()
{
	int a=10;
	int *pa;
	pa=&a;
	

	printf("addres=%u\n",pa);
	printf("value=%d",*pa);


}