#include <stdio.h>
void main()
{
	int a=5,b=10;
	int *pa,*pb;
	pa=&a;
	pb=&b;

	printf("%d\n",(*pa+*pb));
}