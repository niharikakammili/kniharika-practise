#include<stdio.h>
int add(int a,int b); //function declaration
int main()
{
	int result;
	result=add(3,4);//function calling
	printf("the addition of numbers is %d",result);
	return 0;
}
int add(int a,int b){
	return a+b;//function definition
}


