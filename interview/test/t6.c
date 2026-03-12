#include<string.h>
#include<stdio.h>

int main()
{
    char str[100];
    char key;
    char ch;
    int i = 0;

    printf("Enter the string\n");
    fgets(str,sizeof(str),stdin);

    printf("Enter the position\n");
    scanf("%c", &key);

    printf("Enter the character to replace\n");
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == key)
        {
            str[i] = ch;
        }
        i++;
    }

    printf("After replace the character string is %s", str);

    return 0;
}
