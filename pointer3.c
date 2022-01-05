#include <stdio.h>
void main()
{
	int a=5,b=10,c=a;
	int *pa,*pb,*pc;
	
	pc=&a;
	pa=&b;
	pb=&c;



	printf("a=%d\nb=%d",*pa,*pc);
}