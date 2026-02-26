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
			if(j==1 || i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  " );
			}
                }
                printf(" \n");
        }
         for(i=n;i>0;i--)
        {
                for(k=0;k<=n-i;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=2*i-1;j++)
                {
			if(j==1 || j==i)
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
        return 0;
}


