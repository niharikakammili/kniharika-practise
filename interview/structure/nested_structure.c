#include<stdio.h>
struct adress
{
	char city[50];
	int pincode;
};
struct student
{
	char name[50];
	int roll;
	struct adress adr;
};
int main()
{
	struct student s;
	s.roll=16;
	printf("enter the name\n");
	fgets(s.name,sizeof(s.name),stdin);
	printf("enter the city\n");
	fgets(s.adr.city,sizeof(s.adr.city),stdin);
	printf("enter the pincode\n");
	scanf("%d",&s.adr.pincode);
	printf("print the nested data\n");
	printf("%s",s.name);
	printf("%d",s.roll);
	printf("%s",s.adr.city);
	printf("%d",s.adr.pincode);
	return 0;
}

