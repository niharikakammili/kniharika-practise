#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
int main()
{
	struct employee e1;
	printf("id \n");
	scanf("%d",&e1.id);
	printf("name \n");
	scanf("%s",e1.name);
	printf("salary \n");
	scanf("%f",&e1.salary);
	printf("%d",e1.id);
	printf("%s",e1.name);
	printf("%f",e1.salary);
	return 0;
}



