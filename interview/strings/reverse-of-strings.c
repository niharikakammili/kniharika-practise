#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        int i=0,length=0,temp;
        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        while(str[length]!='\0')
        {
                length++;
        }
        while(i<length/2)
        {
                temp=str[i];
                str[i]=str[length-i-1];
                str[length-i-1]=temp;
                i++;

        }
        printf("reverse of the string is %s\n",str);
        return 0;
}

