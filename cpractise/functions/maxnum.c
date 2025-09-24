#include<stdio.h>
int add(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int result=add(20,30);
	printf("the maximum num is %d",result);
	return 0;
}

