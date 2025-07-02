#include <stdio.h>

int main() {
    int a[4]={1,2,3,4};
    for(int i=0;i<4;i++)
    printf("%d",a[i]);
    
    int *p=NULL;
    p=a;
    printf("\n");
    for(int i=0;i<4;i++)
    printf("%d",p[i]);
    for(int i=0;i<4;i++)
    {
        printf("%d",*p);
        p++;
        printf("%p \n",p);
    }
    p=&a[3];
    int *q=p;
    for(int i=0;i<4;i++)
    {
        printf("%p",*p);
    q--;
    printf("%p \n",q);
    }
    return 0;
}

