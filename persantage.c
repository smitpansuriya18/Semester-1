# includ                                e<stdio.h>
void main()
{
	
	float maths,science,english,sunskrit,gujarati,persantage;
	printf("enter the value of maths");
	scanf("%f",&maths);
	printf("enter the value of science");
	scanf("%f",&science);
	printf("enter the value of sunskrit");
	scanf("%f",&sunskrit);
	printf("enter the value of english");
	scanf("%f",&english);
	printf("enter the value of gujarati");
	scanf("%f",&gujarati);
	persantage=(((maths+science+english+sunskrit+gujarati)/500)*100);
	printf("the value of persantage=%f",persantage);
	

}