#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char *start, *end, *left, *right;
    char temp;
    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);
    start = end = str;
    while (1)
    {
        if (*end == ' ' || *end == '\0')
        {
            left  = start;
            right = end - 1;
            while (left < right)
            {
                temp  = *left;
                *left = *right;
                *right = temp;
                left++;
                right--;
            }

            if (*end == '\0')  
                break;

            start = end + 1;   
        }

        end++;
    }

    printf("after reverse %s\n", str);
    return 0;
}

