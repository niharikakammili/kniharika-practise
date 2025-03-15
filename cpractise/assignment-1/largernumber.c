#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the values a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c)
		printf("The largest number is:%d");
	else if(b>=c&&b>=a)
		printf("The largest number is:%d");
	else if(c>=a&&c>=b)
		printf("The largest number is:%d");
}


