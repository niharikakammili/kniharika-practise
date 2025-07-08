#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the numbers \n");
	scanf("%d %d",&num1,&num2);
	switch(num1>num2)
	{
		case 0:
			printf("maximum is %d",num2);
			break;
		case 1:
			printf("maximum is %d",num1);
			break;
	}
	return 0;
}

