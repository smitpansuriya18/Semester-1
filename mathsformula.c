 #include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,D,r1,r2,z;

	printf("enter the value of a=");
	scanf("%f",&a);


	printf("enter the value of b=");
	scanf("%f",&b);

	printf("enter the value of c=");
	scanf("%f",&c);

	d=(b*b)-(4*a*c);
	D=sqrt(d);
	z=sqrt(-d);

	if (d>0)
	{
		printf("r1=%f",(-b+D)/(2*a));
		printf("r2=%f",(-b-D)/(2*a));
	}

	if(d==0)
	{
		printf("r1=r2=%f",(-b/(2*a)));
	}

	
	if(d<0)
	{
		printf("r1=%f+i%f",(-b)/(2*a),(z)/(2*a));
 		printf("r2=%f-i%f",(-b)/(2*a),(z)/(2*a));
	}
}