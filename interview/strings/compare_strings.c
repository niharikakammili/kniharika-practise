#include<stdio.h>
#include<string.h>
int main()
{
        char str1[100],str2[100];
        int i=0;
        printf("enter the string1\n");
        fgets(str1,sizeof(str1),stdin);
        printf("enter the string2\n");
        fgets(str2,sizeof(str2),stdin);
        while(str1[i]!='\0' || str2[i]!='\0')
        {
                if(str1[i]!=str2[i])
                {
                        printf("strings are not equal\n");
                        return 0;
                }
                i++;
        }
        printf("strings are equal\n");
        return 0;
}

