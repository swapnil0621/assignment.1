#include<stdio.h>
void main()
{
	int num,square,cube;
	printf("\n enetr any number:");
	scanf("%d",&num);
	
	if(num % 2==0)
	{
	printf("\n enetr the number is even",num);
	square=num*num;
	scanf("\n square=%d",square);
	
	cube=num*num*num;
	printf("\n cube=%d",cube);
	}
	else
	{
		printf("\n the number is odd",num);
	}
}
