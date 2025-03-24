#include<stdio.h>
int main()
{
	float c,F;
	printf("enter the temperature value:\n");
	scanf("%f",&c);
	F=(c*9/5)+32;
	printf("foreign heat is:%.2f",F);
	return 0;
}

