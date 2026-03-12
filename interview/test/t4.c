#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count = 0;
    char ch;
    int i = 0;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    printf("enter the character\n");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(ch == str[i])
        {
            count++;
        }
        i++;
    }

    printf("after the count %d\n", count);

    return 0;
}
