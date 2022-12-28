#include<stdio.h>
void main()
{
	float radius;
	int choice;
	
	printf("\n enter radius:");
	scanf("%f",&radius);
	
	printf("\n 1. area of circle");
	printf("\n 2. area of circumference");
	
	printf("\n enetr choice:");
	scanf("\%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n area of circle:%f",(3.14*radius*radius));
		break;
		
		case 2:printf("\n circumference of circle:%f",(2.314*radius));
		break;
	}
}
