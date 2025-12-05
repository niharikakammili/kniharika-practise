#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    char *p1, *p2;

    printf("enter the string1\n");
    fgets(str1, sizeof(str1), stdin);

    p1 = str1;    
    p2 = str2;     
    while (*p1 != '\0')
    {
        *p2 = *p1; 
        p1++;       
        p2++;       
    }

    *p2 = '\0';     

    printf("before copy %s\n", str1);
    printf("after copy %s\n", str2);

    return 0;
}

