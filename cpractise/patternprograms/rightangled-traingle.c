#include<stdio.h>
int main()
{
        int i,j,k;
        for(i=0;i<5;i++)
        {
                for(k=1;k<=5-i;k++)
                {
                        printf("");
                }

                for(j=0;j<i;j++)
                {
                        printf("* ");

                }
                printf(" \n");



        }
        return 0;
}
