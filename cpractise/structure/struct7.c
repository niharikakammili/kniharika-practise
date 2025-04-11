#include<stdio.h>
struct date
{
	int days;
	int month;
	int year;
};
int main()
{
	struct date date1,date2;
	int difference;
	printf("enter the date1 details:\n");
	printf("Days");
	scanf("%d",&date1.days);
	printf("Month");
	scanf("%d",&date1.month);
	printf("Year");
	scanf("%d",&date1.year);
	printf("enter the date2 details:\n");
        printf("Days");
        scanf("%d",&date2.days);
        printf("Month");
        scanf("%d",&date2.month);
        printf("Year");
        scanf("%d",&date2.year);
	difference=(date1.days-date2.days);
	printf("difference is:%d",difference);
	return 0;
}

