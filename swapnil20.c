#include<stdio.h>
void main()
{
	int a,b,c,greatest;
	printf("\n enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		greatest=a;
	}
	else if(b>c)
	{
		greatest=b;
	}
	else
	{
		greatest=c;
	}
	printf("\n greatest number is :%d",greatest);
}
