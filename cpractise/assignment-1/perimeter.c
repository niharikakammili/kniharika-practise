#include<stdio.h>
#define pi 3.14
void main()
{
	int r;
	float area,perimeter;
	printf("Enter the value");
	scanf("%d",&r);
	perimeter=2*pi*r;
	area=pi*r*r;
	printf("perimete of circle is: %3f",perimeter);
	printf("area of the circle is: %3f",area);
}


