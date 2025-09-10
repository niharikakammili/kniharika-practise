#include<stdio.h>
int main()
{
	int num,onescompliment;
	printf("enter the number\n");
	scanf("%d",&num);

	
	onescompliment=~num;
	printf("onescompliment is%d",onescompliment);
	return 0;
}

