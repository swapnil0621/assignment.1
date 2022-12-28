#include<stdio.h>
void main()
{
	float principle,time,rate,SI,total;
	

	printf("\n enetr principle");
	scanf("%f",&principle);
	
	printf("\n enetr time");
	scanf("%f",&time);
	
	printf("\n enetr rate");
	scanf("%f",&rate);
	
	SI=(principle*time*rate)/100;
	printf("\n simple interest=%f",SI);
	
	total=SI+principle;
	printf("\n total=%f",total);	
}
