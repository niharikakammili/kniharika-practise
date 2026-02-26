#include<stdio.h>
int main()
{
        int i,j,k,n;
        printf("enter the number of rows \n");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                for(k=0;k<=n-i;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=2*i-1;j++)
                {
			printf("*");

                }
                printf(" \n");
        }
         for(i=n-1;i>=1;i--)
        {
                for(k=0;k<=n-i;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=2*i-1;j++)
                {
			printf("*");


                }
                printf(" \n");


        }
        return 0;
}

