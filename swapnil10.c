#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n enter the day");
	scanf("%d",&a);
	
	b=(a/365);
	c=(a%365);
	a=a-((b*365)+c);
	
	printf("\n %d year,%d weeks,%d days",a,b,c);
}
