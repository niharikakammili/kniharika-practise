#include<stdio.h>
int main()
{
        int i,j,k,n,x;
        printf("enter the number of rows \n");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                for(k=1;k<=n-i;k++)
                {
                        printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                        printf("%d ",j);
                }
                printf("\n");
        }
        return 0;
}
