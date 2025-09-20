#include<stdio.h>
int main()
{
	int n1,n2,a,b,temp,gcd,lcm;
	printf("enter the number1 \n");
	scanf("%d",&n1);
	printf("enter the number2 \n");
        scanf("%d",&n2);
	a=n1;
	b=n2;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm=a*b/gcd;
	printf("lcm is %d %d %d",n1,n2,lcm);
	return 0;
}

