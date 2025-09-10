#include<stdio.h>
int main()
{
        int i,j,k,n;
        printf("enter the number of rows \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(k=1;k<=n-i;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                        if(i==n|| i==j || j==1|| j==(i/2))
                        {
                                printf("* ");
                        }
                        else
                        {
                                printf("  ");
                        }

                }
                printf(" \n");


        }

        for(i=n-1;i>0;i--)
        {
                for(k=1;k<=n-i;k++)
                {
                        printf(" ");

                }
                for(j=1;j<=i;j++)
                {
                        if(i==n|| j==1 || j==i|| j==(i/2))
                        {
                                printf("* ");
                        }
                        else
                        {
                                printf("  ");
                        }
                }

                printf("\n");
        }
        return 0;
}


