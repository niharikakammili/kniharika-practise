#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter the number \n");
	scanf("%d",&num);
	if(num==0)
	{
		count=1;
	}
	else
	{
		for(;num!=0;num=num/10)
		{
			count++;
		}
		printf("the no of digits is %d \n",count);
	}
	return 0;
}


