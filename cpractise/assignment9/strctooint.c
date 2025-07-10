#include<stdio.h>
struct student
{
	int roll;
	char name[10];
	float marks;
};
int main()
{
	struct student s={1,"jenny",35.0};
	struct student*ptr=&s;
	printf("%d",ptr->roll);
	return 0;
}

