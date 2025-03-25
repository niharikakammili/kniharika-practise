#include<stdio.h>
#define pi 3.14f
int main()
{
	float r,area;
	printf("enter the radius:\n");
	scanf("%f",&r);
	area=pi*r*r;
	printf("area of the circle is:%.2f",area);
	return 0;
}

