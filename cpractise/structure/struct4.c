#include<stdio.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	struct time time1,time2,result;
	printf("enter the first input time:\n");
	printf("Hours");
	scanf("%d",&time1.hours);
	printf("Minutes");
	scanf("%d",&time1.minutes);
	printf("Seconds");
	scanf("%d",&time1.seconds);
	printf("enter the second input time:\n");
	printf("Hours");
	scanf("%d",&time2.hours);
	printf("Minutes");
	scanf("%d",&time2.minutes);
	printf("Second");
	scanf("%d",&time2.seconds);
	result.seconds=time1.seconds+time2.seconds;
	result.minutes=time1.minutes+time2.minutes+result.seconds/60;
	result.hours=time1.hours+time2.hours+result.minutes/60;
	result.minutes %=60;
	result.hours %=60;
	printf("result of times is:%.2d %.2d %.2d",result.seconds,result.minutes,result.hours);
	return 0;
}

