#include<stdio.h>
int main()
{
        int p,num;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("enter the position\n");
        scanf("%d",&p);
        if(num&(~(1<<p)))
        {
                printf("the number is reset\n");
        }
        else
        {
                printf("the number is not reset\n");
        }
        return 0;
}

