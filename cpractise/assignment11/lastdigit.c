#include<stdio.h>
int main()
{
	int n,lastdigit;
	printf("enter the number  \n");
	scanf("%d",&n);
	lastdigit=n%10;
	printf("last digit is %d",lastdigit);
	return 0;
}

