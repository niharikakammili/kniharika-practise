#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;
    char *p; 
    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);
    p = str; 
    while(*p != '\0' && *p != '\n')
    {
        if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
               *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        p++;  
    }

    printf("vowels: %d\n", vowels);
    printf("consonants: %d\n", consonants);

    return 0;
}

