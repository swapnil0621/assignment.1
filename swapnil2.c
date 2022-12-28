#include<stdio.h>
void main()
{
	int rollno;
	int sub1,sub2,sub3,sub4,sub5,total,average;
	char name;
	
	printf("\n enter rollno:");
	scanf("%d",&rollno);
	
	printf("\n enter name:");
	scanf("%d",&name);
	
	printf("\n enter sub1:");
	scanf("%d",&sub1);
	
	printf("\n enter sub2:");
	scanf("%d",&sub2);
	
	printf("\n enter sub3:");
	scanf("%d",&sub3);
	
	printf("\n enter sub4:");
	scanf("%d",&sub4);
	
	printf("\n enter sub5:");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	printf("\n total=%d",total);
	
	average=total/5;
	printf("\n average=%d",average);
}

