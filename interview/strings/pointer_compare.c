#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("enter the string1\n");
    fgets(str1, sizeof(str1), stdin);   

    printf("enter the string2\n");
    fgets(str2, sizeof(str2), stdin);

    p1 = str1;
    p2 = str2;

    while (*p1 != '\0' || *p2 != '\0')
    {
        if (*p1 != *p2)
        {
            printf("strings are not equal\n");
            return 0;
        }
        p1++;
        p2++;
    }

    printf("strings are equal\n");
    return 0;
}

