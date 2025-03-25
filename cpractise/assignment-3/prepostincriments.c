#include<stdio.h>
int main()
{
	int a,b,c,x=10;
	scanf("%d",&x);
	c=x++;
	printf("perform postincriment operation:%d\n",c);
	a=++x;
	printf("perform preincriment operation:%d\n",a);
	b=x++;
	printf("%d\n",x);
	return 0;
}


