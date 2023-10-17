#include<stdio.h>
int main()
{
	float a,b,c,emi;
	int d;
	printf(" enter the num of amount :");
	scanf("%f",&a);
	printf("\n enter the intrest amount :");
	scanf("%f",&b);
	printf("\n enter the no of monts :");
	scanf("%d",&d);
	
	
	c=b/(12*100);
	emi=a*c*pow(1+c,d)/(pow(1-c,d))-1;
	printf("your monthly emi : %f",emi);
	
	
	return 0;
	
}