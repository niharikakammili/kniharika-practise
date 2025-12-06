#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], words[20][50];
    int i = 0, j = 0, w = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] != ' ')
        {
            words[w][j] = str[i];
            j++;
        }
        else
        {
            words[w][j] = '\0';
            w++;                
            j = 0;
        }
        i++;
    }

    words[w][j] = '\0'; 
    for(int k = w; k >= 0; k--)
    {
        printf("%s ", words[k]);
    }

    return 0;
}

