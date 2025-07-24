#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter the number of rows \n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
			if(j==1 || j==4 ||i==j)
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


