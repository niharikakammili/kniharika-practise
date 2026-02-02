#include<stdio.h>
struct student
{
	char name[20];
	int age;
	float marks;
};
void display(struct student s)
{
	printf("name: %s",s.name);
	printf("age: %d",s.age);
	printf("marks: %f",s.marks);
}
int main()
{
	struct student s1={"niharika",21,97.5};
	display(s1);
	return 0;
}


