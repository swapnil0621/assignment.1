#include<stdio.h>
void main()
{
	int a,b;
	printf("\n enetr a:");
	scanf("%d",&a);
	
	printf("\n enetr b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n after swap a=%d b=%d",a,b);
}
