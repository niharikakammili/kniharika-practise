#include<stdio.h>
int main()
{
	int num;
	printf("enter the number \n");
	scanf("%d",&num);
	switch(num>0)
	{
	case 1:
		printf("num is positive %d",num);
		break;
	case 0:
		switch(num<0)
		{
			case 1:
				printf("num is negative %d",num);
				break;
			case 0:
				printf("num is zero %d",num);
				break;
		}
		break;
	}
	return 0;
}




