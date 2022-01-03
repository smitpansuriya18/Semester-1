#include <stdio.h>
struct time_struct
{
	int hr;
	int min;
	int sec;

}p[3];

void main()
{
	int i;

	for (int i = 0; i < 5; ++i)
	{
		printf("enter hour=");
		scanf("%d",&p[i].hr);

		printf("enter miniut=");
		scanf("%d",&p[i].min);

		printf("enter second=");
		scanf("%d",&p[i].sec);

		printf("\nhour=%d\nminiut=%d\nsecond=%d",p[i].hr,p[i].min,p[i].sec);
	}
}