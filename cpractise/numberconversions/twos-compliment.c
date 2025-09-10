#include<stdio.h>
int main()
{
        int num,onescompliment,twoscompliment;
        printf("enter the number\n");
        scanf("%d",&num);


        onescompliment=~num;
	twoscompliment=onescompliment+1;
        printf("onescompliment is%d",onescompliment);
	printf("twoscompliment is%d",twoscompliment);
        return 0;
}
      
