#include<stdio.h>
int main
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	(year%4==0 && year%100!=0)?printf("its is leap year"):
		(year%400==0)?printf("it is a leap year"):printf("coomon");
	return 0;
}


