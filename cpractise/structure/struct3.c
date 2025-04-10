#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	int salary;
	char number[11];
};
int main()
{
	struct employee a;
	printf("enter the employee details:\n");
	printf("Name");
	scanf("%s",a.name);
	printf("age");
	scanf("%d",&a.age);
	printf("Salary");
	scanf("%d",&a.salary);
	printf("Number");
	scanf("%s",a.number);
	printf("employee details are:\n");
	printf("Name:%s",a.name);
	printf("Age:%d",a.age);
	printf("Salary:%d",a.salary);
	printf("Number:%s",a.number);
	return 0;
}

