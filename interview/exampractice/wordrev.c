#include<stdio.h>
#include<string.h>

int main()
{
        char str[100], word1[50], word2[50];
        int i = 0, j = 0, k = 0;

        printf("enter two words\n");
        fgets(str, sizeof(str), stdin);
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
                word1[j] = str[i];
                j++;
                i++;
        }
        word1[j] = '\0';
        if(str[i] == ' ')
                i++;
        while(str[i] != '\0' && str[i] != '\n')
        {
                word2[k] = str[i];
                k++;
                i++;
        }
        word2[k] = '\0';
        printf("%s %s", word2, word1);

        return 0;
}

