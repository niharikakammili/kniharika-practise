#include<stdio.h>
#include<string.h>

int main()
{
        char str[100];
        int i=0, vowels=0, consonants=0;

        printf("enter the string\n");
        fgets(str, sizeof(str), stdin);

        while(str[i] != '\0' && str[i] != '\n')
        {
                if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                {
                        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
                           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
                        {
                                vowels++;
                        }
                        else
                        {
                                consonants++;
                        }
                }
                i++;
        }

        printf("vowels: %d\n", vowels);
        printf("consonants: %d\n", consonants);

        return 0;
}

