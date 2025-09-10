#include<stdio.h>
struct student
{
	char name[10];
	int rollnumber;
	float marks;
};
int main()
{
	struct student s1={"riya",21,35.5};
	printf("information of si \n");
	printf("%s %d %f",s1.name,s1.rollnumber,s1.marks);
	return 0;
}

