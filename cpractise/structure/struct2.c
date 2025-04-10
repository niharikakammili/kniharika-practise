#include<stdio.h>
struct student
{
	char name[50];
	int age;
	float totalmarks;
};
int main()
{
	struct student student1;
	printf("enter the student1 details:\n");
	printf("Name");
	scanf("%s",student1.name);
	printf("Age");
	scanf("%d",&student1.age);
	printf("TotalMarks");
	scanf("%f",&student1.totalmarks);
	float averagemarks=(student1.totalmarks)/2;
	printf("enter the student1 details:\n");
	printf("Name is:%s",student1.name);
	printf("Age is:%d",student1.age);
	printf("TotalMarks is:%f",student1.totalmarks);
	printf("averagemarks is:%.2f",averagemarks);
	return 0;
}

