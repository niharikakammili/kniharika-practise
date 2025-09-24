#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int result,a,b,choice;
	while(1)
	{

	printf("enter the num \n");
	printf("1.add\n");
	printf("2.sub\n");
	printf("3.mul\n");
	printf("4.Exit\n");
	printf("enter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the two numbers\n");
			scanf("%d %d",&a,&b);
			result=a+b;
			printf("the result is %d",result);
			break;

		case 2:
                        printf("enter the two numbers\n");
                        scanf("%d %d",&a,&b);
                        result=a-b;
                        printf("the result is %d",result);
                        break;

		case 3:
                        printf("enter the two numbers\n");
                        scanf("%d %d",&a,&b);
                        result=a*b;
                        printf("the result is %d",result);
                        break;

		case 4:
			printf("exiting the program\n");
			exit(0);
		default:
			printf("invalid choice please try again\n");
	}
	}
	return 0;
}

