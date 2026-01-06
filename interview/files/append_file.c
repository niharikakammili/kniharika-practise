#include<stdio.h>
int main()
{
        FILE*fp;
        char data[100];
        fp=fopen("sample.txt","a");  //create a file in write mode
        if(fp==NULL)
        {
                printf("file not created sucessfully\n");
                return 1;
        }
        printf("enter the data to append\n");
        fgets(data,sizeof(data),stdin);
        fputs(data,fp);
        fclose(fp);
        printf("append data sucessfully\n");
        return 0;
}

