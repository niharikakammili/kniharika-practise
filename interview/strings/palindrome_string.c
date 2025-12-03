#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        int i=0,length=-1;
        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        while(str[i] != '\0' && str[i] != '\n')
        {
                length++;
                i++;
        }

        i = 0;

        while(i <= length/2)
        {
                if(str[i] != str[length - i])
                {
                        printf("not a palindrome\n");
                        return 0;
                }
                i++;
        }

        printf("it is palindrome\n");
        return 0;
}

