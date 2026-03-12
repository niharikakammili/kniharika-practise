#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int pos;
    char ch;
    int i = 0;

    printf("Enter the string\n");
    fgets(str, sizeof(str), stdin);

    printf("Enter the position\n");
    scanf("%d", &pos);

    printf("Enter the character to replace\n");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(i == pos)
        {
            str[i] = ch;
            break;
        }
        i++;  
    }

    printf("After replace the character string is %s", str);

    return 0;
}
