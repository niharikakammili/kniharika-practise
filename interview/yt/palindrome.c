#include<stdio.h>
int main()
{
        int n,r,reverse=0,original=0;
        printf("enter the number\n");
        scanf("%d",&n);
	original=n;
        while(n>0)
        {
                r=n%10;
                reverse=reverse*10+r;
                n=n/10;
        }
	if(original==reverse)
	{
		printf("it is a palindrome number");
	}
	else
	{
		printf("not a palindrome number");
	}
	return 0;
}


