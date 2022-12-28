#include<stdio.h>
void main()
{
	int dividend,divisor,quotient,remainder;
	
	printf("\n enetr dividend:");
	scanf("%d",&dividend);
	
	printf("\n enetr divisor:");
	scanf("%d",&divisor);
	
	quotient=dividend/divisor;
	
	remainder=dividend%divisor;
	
	printf("\n quotient=%d",quotient);
	printf("\n remainder=%d",remainder);
	
}
