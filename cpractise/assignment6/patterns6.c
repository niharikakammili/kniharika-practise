#include<stdio.h>
int main()
{
        int i,j,size;
        printf("enter the size \n");
        scanf("%d",&size);
        for(i=1;i<=size;i++)
        {
                for(j=1;j<=7;j++)
                {
                        if(j>=5-i && j<=3+i)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf(" ");
                        }
                }
                printf("\n");
        }
        return 0;
}

