#include<stdio.h>
int main()
{
	int n,res;
	printf("enter the number \n");
	scanf("%x",&n);
	res=(n<<4)|(n>>4);
	printf("result is:%x",res);
	return 0;
}

